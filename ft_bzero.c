/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:44:16 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/26 19:36:08 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

// int main ()
// {
// 	char a[]= "asarbane9aw9aw";
// 	//char *p = strchr(a,'b');
// 	ft_bzero(&a[5],5);
//  	//ft_bzero(a , (strlen(a)-5));
//  	printf("%s\n" , a);
// }