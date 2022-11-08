/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:05:47 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 15:25:16 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*m;

	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	m = (char *)malloc(sizeof(char) * (len + 1));
	if (!m)
		return (NULL);
	while (*s1)
	{
		m[i] = *(char *)s1;
		i++;
		s1++;
	}
	m[i] = '\0';
	return (m);
}
