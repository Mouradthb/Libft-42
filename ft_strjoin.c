/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:50:43 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/27 11:47:28 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*alloc;
	size_t	i;
	size_t	soml;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	soml = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	alloc = (char *)malloc(sizeof(char) * (soml));
	if (!alloc)
		return (NULL);
	while (s1[i] != '\0')
	{
		alloc[i] = s1[i];
		i++;
	}
	ft_memcpy(alloc + i, s2, soml);
	alloc[soml] = '\0';
	return (alloc);
}
// int main ()
// {
// 	char a[]="cocoderasta!!!!!!!!!!!!!!!!";
// 	char b[]="cocoritta";
// 	printf("%s",ft_strjoin(b,a));
// }