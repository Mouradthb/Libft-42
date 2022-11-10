/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:56:06 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/09 10:59:17 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		cnt;

	if (!lst)
		return (0);
	p = lst;
	cnt = 0;
	while (p != NULL)
	{
		cnt += 1;
		p = p->next;
	}
	return (cnt);
}
