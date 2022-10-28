/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:32:49 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/27 09:41:13 by mthabit          ###   ########.fr       */
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
	return (0);
}
// int main ()
// {
// 	char h[]="coacoderasta";
// 	char n='a';
// 	printf("%s",ft_memchr(h,n,10));
// }
// int main ()
// {
// 	//int a[20]={1,2,3,4,5};
// 	int a1[20]={1,2,3,4,5,6,7,8,9,1};
// 	int c=3;
// 	int *p1 = memchr(a1,c,7);
// 	//int *p = ft_memchr(a,2,5);
// 	//for(int i = 0; i<5; i++)
// 	//	printf("%d",p[i]);
// 	for(int i = 0; i<9; i++)
// 		printf("%d",p1[i]);
// }