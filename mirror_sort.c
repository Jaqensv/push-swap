/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mirror_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:10:38 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/04 00:15:22 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	find_highest(t_lst **lst_b, int arg_len, int pack)
{
	int	tracker;

	tracker = 1;
	while ((*lst_b)->content->pack = pack)
	{
		if ((*lst_b)->content->rank = (*lst_b)->content->pack / CHUNKS * arg_len);
			return (tracker);
		*lst_b = (*lst_b)->next;
		tracker++;
	}
}

void	mirror_sort(t_lst **lst_a, t_lst **lst_b)
{ 
	int	i;
	int	fract;
	int	arg_len;
	
	i = 0;
	fract = 1;
	arg_len = ft_lstsize(*lst_a);
	while (fract <= 5) 
	{
		while (i < arg_len * fract / 5)
		{
			if ((*lst_a)->content->rank <= arg_len * fract / 5)
			{
				pb(lst_a, lst_b);
				i++;
				if (ft_lstsize(*lst_b) > 1 && (*lst_b)->content->rank < arg_len * ((double)fract - 0.5) / 5.0)
				{
					if ((*lst_a)->content->rank > arg_len * fract / 5)
					{
						(*lst_b)->content->pack = fract * 2;
						rr(lst_a, lst_b);
					}
					else
					{
						(*lst_b)->content->pack = fract * 2 - 1;
						rb(lst_b, true);
					}
				}
			}
			else
				ra(lst_a, true);
		}
		find_highest(lst_b, arg_len);
		fract += 1;
	}
}
