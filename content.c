/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   content.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:10:31 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/14 05:21:54 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*prev_last(t_lst *lst, t_lst *tmp)
{
	if (!lst)
		return (0);
	while (lst->next != tmp)
		lst = lst->next;
	return (lst);
}

void	ranking(char **arg, t_lst *lst)
{
	int		i;
	int		j;
	t_lst	*first;

	i = 0;
	first = lst;
	while (arg[i])
	{
		lst = first;
		while (lst)
		{
			j = -1;
			lst->content->rank++;
			while (arg[++j])
				if (ft_atoi(arg[i]) > ft_atoi(arg[j]))
					lst->content->rank++;
			lst = lst->next;
			i++;
		}
	}
	lst = first;
}
