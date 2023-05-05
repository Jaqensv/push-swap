/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   content.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:10:31 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/27 12:22:02 by MAIN             ###   ########.fr       */
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

void	initial_order(int argc, char **arg)
{
	int		i;

	i = 0;
	(void)argc;
	while (arg[i + 1])
	{	
		if (ft_atoi(arg[i]) < ft_atoi(arg[i + 1]))
			i++;
		else
			return ;
	}
	free_split(argc, arg);
	exit(1);
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
