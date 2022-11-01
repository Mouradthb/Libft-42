/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:56:06 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/01 20:36:58 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		cnt;

	p = lst;
	cnt = 0;
	while (p != NULL)
	{
		cnt += 1;
		p = p->next;
	}
	return (cnt);
}

// int main ()
// {	
// 	t_list	*list;
// 	int		i;

// 	i = 0;
// 	list = ft_lstnew("head");
// 	while (i < 5)
// 	{
// 		ft_lstadd_front(&list,ft_lstnew(("new")));
// 		i++;
// 	}
// 	printf("%d\n", ft_lstsize(list));
// 	while (list)
// 	{
// 		printf("%s\n", list->content);
// 		list = list->next;
// 	}
//}