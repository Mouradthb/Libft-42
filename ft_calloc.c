/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:12:44 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/10 09:35:47 by mthabit          ###   ########.fr       */
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
	ft_bzero(c, i);
	return (c);
}
