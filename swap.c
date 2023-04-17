/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:27:23 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/14 05:29:11 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_lst **lst_a, bool one_write)
{
	t_lst	*tmp;

	if (!lst_a || !*lst_a || !(*lst_a)->next)
		return ;
	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	tmp->next = (*lst_a)->next;
	(*lst_a)->next = tmp;
	if (one_write)
		write(1, "sa\n", 3);
}

void	sb(t_lst **lst_b, bool one_write)
{
	t_lst	*tmp;

	if (!lst_b || !*lst_b || !(*lst_b)->next)
		return ;
	tmp = *lst_b;
	*lst_b = (*lst_b)->next;
	tmp->next = (*lst_b)->next;
	(*lst_b)->next = tmp;
	if (one_write)
		write(1, "sb\n", 3);
}

void	ss(t_lst **lst_a, t_lst **lst_b)
{
	sa(lst_a, false);
	sb(lst_b, false);
	write(1, "ss\n", 3);
}
