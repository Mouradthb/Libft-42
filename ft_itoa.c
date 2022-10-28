/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:56:35 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/27 12:17:00 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
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

	start = n < 0;
	len = ft_intlen(n);
	alloc = (char *)malloc(sizeof(char) * (len + 1));
	if (!alloc)
		return (NULL);
	alloc[len] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		n = -n;
		alloc[0] = '-';
	}
	len--;
	while (len >= start)
	{
		alloc[len] = ((n % 10) + 48);
		n = (n / 10);
		len--;
	}
	return (alloc);
}

// int main()
// {
// 	int a = 0;
// 	printf("%s",ft_itoa(a));
// }