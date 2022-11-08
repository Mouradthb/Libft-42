/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:15:48 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 22:46:56 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = 0;
}
// void f(void *content)
// {
// 	free(content);
// }
// int main ()
// {
// 	t_list *head = ft_lstnew(ft_strdup("tset1"));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("test2")));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("test3")));
	
// 	while (head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// 	ft_lstclear(&head, f);
// 	printf("%p", head);
// }
