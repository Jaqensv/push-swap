/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_to_rrb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:16:41 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/14 05:25:53 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_lst **lst_a, bool one_write)
{
	t_lst	*tmp;

	tmp = ft_lstlast(*lst_a);
	ft_lstadd_front(lst_a, tmp);
	prev_last(*lst_a, tmp)->next = NULL;
	if (one_write)
		write(1, "rra\n", 4);
}

void	rrb(t_lst **lst_b, bool one_write)
{
	t_lst	*tmp;

	tmp = ft_lstlast(*lst_b);
	ft_lstadd_front(lst_b, tmp);
	prev_last(*lst_b, tmp)->next = NULL;
	if (one_write)
		write(1, "rrb\n", 4);
}

void	rrr(t_lst **lst_a, t_lst **lst_b)
{
	rra(lst_a, false);
	rrb(lst_b, false);
	write(1, "rrr\n", 4);
}
