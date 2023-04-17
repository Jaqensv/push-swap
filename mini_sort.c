/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:17:02 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/14 05:22:27 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	mini_1(t_lst *lst_a)
{
	if (lst_a->next->content->rank == 2)
		return ;
	else
	{
		sa(&lst_a, true);
		ra(&lst_a, true);
	}
}

static void	mini_2(t_lst *lst_a)
{
	if (lst_a->next->content->rank == 1)
		return (sa(&lst_a, true));
	else
		rra(&lst_a, true);
}

static void	mini_3(t_lst *lst_a)
{
	if (lst_a->next->content->rank == 1)
		return (ra(&lst_a, true));
	else
	{
		sa(&lst_a, true);
		rra(&lst_a, true);
	}
}

static void	mini_sort_3(t_lst **lst_a)
{
	if ((*lst_a)->content->rank == 1)
		mini_1(*lst_a);
	if ((*lst_a)->content->rank == 2)
		mini_2(*lst_a);
	if ((*lst_a)->content->rank == 3)
		mini_3(*lst_a);
}

void	mini_sort(t_lst **lst_a, t_lst **lst_b)
{
	if (ft_lstsize(*lst_a) == 3)
		return (mini_sort_3(lst_a));
	while (ft_lstsize(*lst_b) < 2)
	{
		if ((*lst_a)->content->rank == 4 || (*lst_a)->content->rank == 5)
			pb(lst_a, lst_b);
		else
			ra(lst_a, true);
	}
	mini_sort_3(lst_a);
	if ((*lst_b)->content->rank < (*lst_b)->next->content->rank)
		sb(lst_b, true);
	pa(lst_a, lst_b);
	pa(lst_a, lst_b);
	ra(lst_a, true);
	ra(lst_a, true);
}
