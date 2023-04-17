/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:12:15 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/14 05:28:18 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_lst **lst_a, t_lst **lst_b)
{
	t_lst	*tmp;

	if (*lst_b == NULL)
		return ;
	tmp = *lst_b;
	*lst_b = (*lst_b)->next;
	tmp->next = *lst_a;
	*lst_a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_lst **lst_a, t_lst **lst_b)
{
	t_lst	*tmp;

	if (*lst_a == NULL)
		return ;
	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	tmp->next = *lst_b;
	*lst_b = tmp;
	write(1, "pb\n", 3);
}
