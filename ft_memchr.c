/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:32:49 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/07 22:08:30 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//function locates the first occurrence of c
//function returns a pointer to the byte located,
// or NULL if no such byte exists within n bytes.
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	int j=0;
// 	int	p[8]= {1,256,3,4,5,6,7,8};
// 	int *l = memchr(p, 256, 8*sizeof(int));
// 	while (j<7)
// 	{
// 		printf("%d | ", l[j]);
// 		j++;
// 	}
// }