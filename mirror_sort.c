/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mirror_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:10:38 by mde-lang          #+#    #+#             */
/*   Updated: 2023/03/26 14:04:31 by MAIN             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    sort(t_lst **lst_a, t_lst **lst_b)

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
						rr(lst_a, lst_b);
					else
						rb(lst_b, true);
				}
			}
			else
				ra(lst_a, true);
		}
		fract += 1;
	}
    //sort(lst_a, lst_b);

}
