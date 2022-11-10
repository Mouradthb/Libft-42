/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:08:22 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/09 15:40:58 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*f_ptr;
	int				i;

	if (!s)
		return (NULL);
	i = 0;
	f_ptr = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!f_ptr)
		return (NULL);
	while (s[i])
	{
		f_ptr[i] = f(i, s[i]);
		i++;
	}
	f_ptr[i] = '\0';
	return (f_ptr);
}
