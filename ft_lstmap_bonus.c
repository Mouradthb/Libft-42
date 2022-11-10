/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:13:41 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/10 09:40:47 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lsret;
	t_list	*lstn;

	if (!lst || !f || !del)
		return (NULL);
	lstn = ft_lstnew(NULL);
	if (!lstn)
		return (NULL);
	lstn->content = f(lst->content);
	lsret = lstn;
	lst = lst->next;
	while (lst)
	{
		lstn->next = ft_lstnew(NULL);
		if (!lstn->next)
		{
			ft_lstclear(&lsret, del);
			return (NULL);
		}
		lstn->next->content = f(lst->content);
		lst = lst->next;
		lstn = lstn->next;
	}
	lstn->next = NULL;
	return (lsret);
}
