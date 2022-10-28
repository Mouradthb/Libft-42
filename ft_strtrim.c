/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:21:10 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/27 17:20:01 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	j = 0;
	if (set == s1)
		return (ft_strdup(""));
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set, s1[j]) && s1)
		j++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i--;
	if (i < 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, j, i + 1 - j));
}

// int main ()
// {
// 	char *s= "12346";
// 	char *st="12346";
// 	printf("%s",ft_strtrim(s,st));
// }
