/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:06:47 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 15:25:46 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	dln;
	size_t	sln;

	sln = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (sln);
	dln = ft_strlen(dst);
	if (dstsize <= dln)
		return (dstsize + sln);
	j = dln;
	i = 0;
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dln + sln);
}
