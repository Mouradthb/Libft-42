/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:49:16 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/27 10:04:54 by mthabit          ###   ########.fr       */
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
// 	size_t i = 3;
// 	char d[] = "1234567";

// 	while (d[i] && i<strlen(d))
// 		i++;
// 	ft_memset(&d[2] ,'c', 1);
// 	printf("%s\n", d);
// 	// printf("%s",memset(d,'c', i));
// }