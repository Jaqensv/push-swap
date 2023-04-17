/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mirror_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:10:38 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/17 14:04:34 by MAIN             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_xtrem	find_xtrem(t_lst *lst_b)
{
	t_xtrem		xtrem;
	int			i;

	xtrem.rank_high = 1;
	i = 1;
	while (lst_b)
	{
		if (lst_b->content->rank > xtrem.rank_high)
		{
			xtrem.rank_high = lst_b->content->rank;
			xtrem.spot_high = i;
		}
		lst_b = lst_b->next;
		i++;
	}
	return (xtrem);
}

void	back_xtrem(t_lst **lst_a, t_lst **lst_b, t_xtrem xtrem, bool *on_off)
{
	if ((*lst_b)->content->rank == xtrem.rank_high - 1)
	{
		pa(lst_a, lst_b);
		*on_off = true;
	}
	if ((*lst_b)->content->rank == xtrem.rank_high)
	{
		pa(lst_a, lst_b);
		if (*on_off == true)
		{
			sa(lst_a, true);
			*on_off = false;
		}
	}
}

void	back_to_a(t_lst **lst_a, t_lst **lst_b)
{
	t_xtrem	xtrem;
	bool	on_off;

	on_off = false;
	while (*lst_b)
	{
		xtrem = find_xtrem(*lst_b);
		if ((*lst_b)->content->rank == xtrem.rank_high
			|| ((*lst_b)->content->rank == xtrem.rank_high - 1
				&& xtrem.rank_high - 1 != 0))
			back_xtrem(lst_a, lst_b, xtrem, &on_off);
		else
		{
			if (xtrem.spot_high < ft_lstsize(*lst_b) / 2)
				rb(lst_b, true);
			else
				rrb(lst_b, true);
		}
	}
}

void	chuncks(t_lst **lst_a, t_lst **lst_b, int arg_len, int fract)
{
	if ((*lst_a)->content->rank > arg_len * fract / 5)
	{
		((*lst_b)->content->pack = fract * 2);
		rr(lst_a, lst_b);
	}
	else
	{
		((*lst_b)->content->pack = fract * 2 - 1);
		rb(lst_b, true);
	}
}

void	mirror_sort(t_lst **lst_a, t_lst **lst_b, int arg_len)
{
	int	i;
	int	fract;

	i = 0;
	fract = 1;
	while (fract <= 5)
	{
		while (i < arg_len * fract / 5)
		{
			if ((*lst_a)->content->rank <= arg_len * fract / 5)
			{
				pb(lst_a, lst_b);
				i++;
				if (ft_lstsize(*lst_b) > 1 && (*lst_b)->content->rank
					< arg_len * ((double)fract - 0.5) / 5.0 && *lst_a)
					chuncks(lst_a, lst_b, arg_len, fract);
			}
			else
				ra(lst_a, true);
		}
		fract += 1;
	}
	back_to_a(lst_a, lst_b);
}
