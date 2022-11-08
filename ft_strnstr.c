/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:03:04 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 15:41:44 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && len == 0)
		return (NULL);
	if (*needle == 0)
		return ((char *)haystack);
	i = ft_strlen(haystack);
	j = ft_strlen(needle);
	if (i < j || len < j)
		return (NULL);
	while (len-- >= j && *haystack)
	{
		if (ft_memcmp(haystack, needle, j) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
