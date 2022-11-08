/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:04:46 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/08 22:45:29 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void f(void *content)
// {
// 	*((char *)content) = '1';
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main ()
// {
// 	t_list *x = ft_lstnew(ft_strdup("abcd"));

// 	ft_lstiter(x, f);

// 	printf("%s", (char*)(x->content));
// }
