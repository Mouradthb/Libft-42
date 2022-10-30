/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:49:16 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/30 20:48:14 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main ()
// {
// 	size_t i = 0;
// 	size_t j = 0;
// 	char d[] = "1234567555555";
// 	char b[] = "mourad";

// 	while (d[i])
// 	{
// 		ft_memset(&d[i+3], b[j], 1);
// 			j++;
// 			i++;
// 		if (b[j] == '\0')
// 		{
// 			while(d[i])
// 			i++;
// 		}
// 	}
// 	printf("%s\n", d);
// 	// printf()
// 	// printf("%s",memset(d,'c', i));
// }