/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:30:21 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 17:10:56 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		len1;
	char		*p;

	i = 0;
	if (s == NULL)
		return (NULL);
	len1 = ft_strlen(s);
	if (len == 0)
		return (ft_strdup(""));
	if (start > len1)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[start] && i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}