/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:46:39 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/27 11:19:47 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	minmax_res(long long int res, long long int f_res)
{
	if ((res / 10) != f_res)
		return (1);
	return (0);
}

static int	if_minus(char c, int sig)
{
	if (c == '-')
		sig *= -1;
	return (sig);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sig;
	long long int	res;
	long long int	f_res;

	i = 0;
	sig = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sig = if_minus(str[i], sig);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		f_res = res;
		res = (res * 10) + (str[i] - '0');
		if (minmax_res(res, f_res) && sig == 1)
			return (-1);
		else if (minmax_res(res, f_res) && sig == -1)
			return (0);
		i++;
	}
	return (res * sig);
}

// int main()
// {
// 	char s[] = "   	9223372036854775810";
// 	char	s2[]="    9223372036854775810";
// 	printf("%d\n---\n",ft_atoi(s));
// 	printf("%d", atoi(s2));
// }