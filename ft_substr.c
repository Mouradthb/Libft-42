/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:30:21 by mthabit           #+#    #+#             */
/*   Updated: 2022/10/30 20:47:10 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		len1;
	char		*p;

	i = 0;
	len1 = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (len1 == 0 || len <= 0)
		return (ft_strdup(""));
	if (start > len1)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[start] && i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*p;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	p = malloc((len + 1) * sizeof(char));
// 	if (!p)
// 		return (NULL);
// 	while (i < len && s[start])
// 	{
// 		p[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	p[i] = '\0';
// 	return (p);
// }

// int main()
// {
// 	char str[] = "lorem ipsum dolor itus";
// 	// int len =  ft_strlen(ft_substr(str, 3, 6));
// 	printf("%s", ft_substr(str, 3, 6));
// }