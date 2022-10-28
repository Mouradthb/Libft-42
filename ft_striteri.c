/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:36:12 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/27 12:08:41 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}

// void	me(unsigned int i, char *c)
// {
// 	i = 32;
// 	*c += i;
// }

// int main ()
// {
// 	char a[] ="AKAKAKAKAKAKA";
// 	ft_striteri(a,me);
// 	printf("%s",a);
// }