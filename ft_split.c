/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:01:56 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/10 09:32:53 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	scount(char const *s, char c)
{
	int		flag;
	size_t	sdetect;

	flag = 0;
	sdetect = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			sdetect++;
		}
		s++;
	}
	return (sdetect);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

static char	**ft_getstr(const char *s, char	**allstr, char c, size_t s_beg)
{
	size_t	i;
	size_t	j;
	size_t	s_end;

	j = 0;
	i = scount(s, c);
	while (j < i)
	{
		while (s[s_beg] == c && s[s_beg] != '\0')
			s_beg++;
		s_end = s_beg;
		while (s[s_end] != c && s[s_end] != '\0')
			s_end++;
		allstr[j] = ft_substr(s, s_beg, (s_end - s_beg));
		if (!allstr[j])
			return (ft_free(allstr));
		s_beg = s_end;
		j++;
	}
	allstr[j] = NULL;
	return (allstr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	s_beg;
	char	**alloc;

	if (!s)
		return (0);
	s_beg = 0;
	i = scount(s, c);
	alloc = (char **)malloc(sizeof(char *) * (i + 1));
	if (!alloc)
		return (NULL);
	return (ft_getstr(s, alloc, c, s_beg));
}
