/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:50:43 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 15:07:14 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*alloc;
	size_t	i;
	size_t	j;
	size_t	soml;

	if (!s1 || !s2)
		return (0);
	i = 0;
	soml = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	alloc = (char *)malloc(sizeof(char) * (soml));
	if (!alloc)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		alloc[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		alloc[i++] = s2[j++];
	}
	alloc[i] = '\0';
	return (alloc);
}
