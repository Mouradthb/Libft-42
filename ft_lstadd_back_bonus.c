/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:44:30 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/01 22:53:46 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	else if (*lst == 0)
		*lst = new;
	else
	ft_lstlast(*lst)->next = new ;
	new = *lst;
}
// int main ()
// {
// 	t_list	*head;
// 	head = ft_lstnew("trrr");
// 	ft_lstadd_back(&head,ft_lstnew("ok"));
// 	printf("%s", head->next->content);
// }

