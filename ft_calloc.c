/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:12:44 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/27 09:34:46 by mthabit          ###   ########.fr       */
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

// int main ()
// {
// 	int *p = ft_calloc(42949672999, 1);
// 	// int *q = calloc(1844674407370955161, 1);
// 	for (int i = 0; i< 8; i++)
// 		printf("%d - %d\n", i, p[i]);
// 	printf("--------\n");
// 	// for(int j = 0; j< 8 ; j++)
// 	// 	printf("%d - %d\n", j, q[j]);
// }