/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:36:45 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/01 22:32:57 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

// int main ()
// {
// 	t_list	*pt;
// 	int		i;

// 	i = 0;
// 	pt = ft_lstnew(ft_strdup("bro"));
// 	while (i < 3)
// 	{
// 		ft_lstadd_front(&pt, ft_lstnew(ft_strdup("ok")));
// 		i++;
// 	}
// 	printf("|%s|\n-----\n", ft_lstlast(pt)->content);
// 	while (pt)
// 	{
// 		printf("%s\n", pt->content);
// 		pt = pt->next;
// 	}
// }
