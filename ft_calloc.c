/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:12:44 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/07 22:06:36 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;
	size_t	i;

	c = NULL;
	i = size * count;
	if (count != 0 && i / count != size)
		return (NULL);
	c = malloc((count * size));
	if (!c)
		return (NULL);
	ft_memset (c, '\0', (count * size));
	return (c);
}

// int	main ()
// {
// 	size_t i = 0;
// 	int a[] = {1,2,3,4,5};
// 	while (i<5)
// 	{
// 		printf("%d", ft_calloc(a[i], 1));
// 		i++;
// 	}
// }

// int main ()
// {
// 	int *p = ft_calloc(42949, 1);
// 	int *q = calloc(1844, 1);
// 	for (int i = 0; i< 8; i++)
// 		printf("%d - %d\n", i, p[i]);
// 	printf("--------\n");
// 	for(int j = 0; j< 8 ; j++)
// 		printf("%d - %d\n", j, q[j]);
// }