/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:49:26 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 22:46:47 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void f(void *content)
// {
// 	free(content);
// }
// int main ()
// {
// 	t_list *head = ft_lstnew(ft_strdup("ok")); 
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("bro")));
// 	printf("%s", head->next->content);
// 	ft_lstdelone(head->next, f);
// 	printf("%s", head->next->content);
// }