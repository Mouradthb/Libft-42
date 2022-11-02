/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:13:41 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/02 21:45:26 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*lstn;

	if (!lst || !f || !del)
		return (NULL);
	lstn = ft_lstnew(f(lst->content));
	ret = lstn;
	lst = lst->next;
	while (lst)
	{
		lstn->next = ft_lstnew(f(lst->content));
		if (!lstn->next)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		lst = lst->next;
		lstn = lstn->next;
	}
	lstn->next = NULL;
	return (ret);
}

// void	*nd_modif(void *content)
// {
// 	content = "salam";
// 		return (content);
// }

// void	delete(void *content)
// {
// 	free(content);
// }

// int main ()
// {
// 	t_list	*head;
// 	int 	i;

// 	i = 0;
// 	head = ft_lstnew(ft_strdup("bro"));
// 	while (i<4)
// 	{
// 		ft_lstadd_front(&head, ft_lstnew(ft_strdup("ok")));
// 		i++;
// 	}
// 	i=0;
// 	while (i<4)
// 	{
// 		printf("%s\n", ft_lstmap(head, nd_modif, delete)->content);
// 		i++;
// 	}
// }
