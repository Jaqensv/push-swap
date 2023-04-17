/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:25:25 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/14 05:29:58 by mde-lang         ###   ########.fr       */
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
