/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:22:25 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/07 22:09:48 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src)
		return (dst);
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
// 	int a[8] = {256,2,3,4,5,6};
// 	int b[8] = {2,4,6,1,8,4,7};
// 	int i=0;
// 	ft_memcpy(b,a,1);
// 	while (i<6)
// 	{
// 	printf("%d",b[i]);
// 	i++;
// 	}
// }