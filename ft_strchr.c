/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:52:50 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/30 20:46:25 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
// int main ()
// {
// 	char h[]="kokoderasta";
// 	char n ='d';
// 	printf("%s", ft_strchr(h,n));
// }
// int main ()
// {
// 	char h[]="kokoderasta";
// 	char n ='d';
// 	printf("%s", ft_strchr(h,n+256));
// }