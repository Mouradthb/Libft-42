/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:59:53 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 14:54:36 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cp_dst;
	const char	*cp_src;

	if (dst == src)
		return (dst);
	cp_dst = dst;
	cp_src = src;
	if (cp_dst > cp_src)
	{
		cp_dst += len;
		cp_src += len;
		while (len--)
			*--cp_dst = *--cp_src;
	}
	else
		while (len--)
			*cp_dst++ = *cp_src++;
	return (dst);
}

