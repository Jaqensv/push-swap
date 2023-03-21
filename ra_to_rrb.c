/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_to_rrb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:16:41 by mde-lang          #+#    #+#             */
/*   Updated: 2023/03/19 15:53:04 by MAIN             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_lst **lst_a, bool one_write)
{
	t_lst	*tmp;

	if (ft_lstsize(*lst_a) < 2)
		return ;
	tmp = *lst_a;
	*lst_a = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(lst_a, tmp);
	if (one_write)
		write(1, "ra\n", 3);
}

void	rb(t_lst **lst_b, bool one_write)
{
	t_lst	*tmp;

	if (ft_lstsize(*lst_b) < 2)
		return ;
	tmp = *lst_b;
	*lst_b = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(lst_b, tmp);
	if (one_write)
		write(1, "rb\n", 3);
}

void	rr(t_lst **lst_a, t_lst **lst_b)
{
	ra(lst_a, false);
	rb(lst_b, false);
	write(1, "rr\n", 3);
}
void	rra(t_lst **lst_a, bool one_write)
{
	t_lst	*tmp;

	tmp = ft_lstlast(*lst_a);
	ft_lstadd_front(lst_a, tmp);
	if (one_write)
		write(1, "rra\n", 4);
}

void	rrb(t_lst **lst_b, bool one_write)
{
	t_lst	*tmp;

	tmp = ft_lstlast(*lst_b);
	ft_lstadd_front(lst_b, tmp);
	if (one_write)
		write(1, "rrb\n", 4);
}
void	rrr(t_lst **lst_a, t_lst **lst_b) // segfault ??
{
	rra(lst_a, false);
	rrb(lst_b, false);
	write(1, "rrr\n", 4);
}
