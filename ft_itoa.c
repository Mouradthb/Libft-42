/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:56:35 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/03 12:42:54 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = n <= 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*alloc;
	int		start;
	long	nl;

	nl = (long)n;
	start = nl < 0;
	len = ft_intlen(n);
	alloc = (char *)malloc(sizeof(char) * (len + 1));
	if (!alloc)
		return (NULL);
	alloc[len] = '\0';
	if (nl < 0)
	{
		nl = -nl;
		alloc[0] = '-';
	}
	len--;
	while (len >= start)
	{
		alloc[len] = ((nl % 10) + 48);
		nl = (nl / 10);
		len--;
	}
	return (alloc);
}

// int main()
// {
// 	int a = -2147483648;
// 	printf("%s",ft_itoa(a));
// }