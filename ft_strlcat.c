/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:06:47 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/26 21:22:47 by mthabit          ###   ########.fr       */
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
// size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	dest_len;
// 	size_t	src_len;

// 	i = 0;
// 	dest_len = ft_strlen(dest);
// 	src_len = ft_strlen(src);
// 	if (!dest && dstsize == 0)
// 		return (src_len);
// 	if (dstsize -1 < dest_len || dstsize == 0)
// 		return (dstsize + src_len);
// 	if (dstsize -1 > dest_len)
// 	{
// 		while (src[i] != '\0' && dest_len + 1 + i < dstsize)
// 		{
// 			dest[dest_len + i] = src[i];
// 			i++;
// 		}
// 	}
// 	dest[dest_len + i] = '\0';
// 	return (dest_len + src_len);
// }
// int main ()
// {
// 	// char d[20]="somo";
// 	char s[]="yamo";
// 	// char d1[20]="somo";
// 	// char s1[]="yamo";
// 	printf("%zu\n",strlcat(((void *)0), s, 0));
// 	printf("%zu\n", ft_strlcat(((void *)0), s, 0));
// }