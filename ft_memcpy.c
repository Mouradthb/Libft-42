/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:22:25 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/30 21:19:30 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
	}
	return (dst);
}

// int main ()
// {
// 	int a[6] = {1,2,3,4,5,6};
// 	int b[6] = {2,4,6,8,8,4};
// 	int i=0;
// 	ft_memcpy(b,a,4*sizeof(int));
// 	while (i<6)
// 	{
// 	printf("%d",b[i]);
// 	i++;
// 	}
// }