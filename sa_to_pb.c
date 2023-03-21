/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_to_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:12:15 by mde-lang          #+#    #+#             */
/*   Updated: 2023/03/19 03:34:02 by MAIN             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_lst **lst_a, bool one_write)
{
	t_lst *tmp;

	if (!lst_a || !*lst_a || !(*lst_a)->next)
        return ;
	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	tmp->next = (*lst_a)->next;
	(*lst_a)->next = tmp;
	if (one_write)
		write(1, "sa\n", 3);
}
void    sb(t_lst **lst_b, bool one_write)
{
    t_lst	*tmp;
    
    if (!lst_b || !*lst_b || !(*lst_b)->next)
        return ;
    tmp = *lst_b;
    *lst_b = (*lst_b)->next;
    tmp->next = (*lst_b)->next;
    (*lst_b)->next = tmp;
    if (one_write)
        write(1, "sb\n", 3);
}

void    ss(t_lst **lst_a, t_lst **lst_b)
{
	sa(lst_a, false);
	sb(lst_b, false);
	write(1, "ss\n", 3);
}

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

// void    pb(t_lst **lst_a, t_lst **lst_b)
// {
//     t_lst   *tmp;
//     //t_lst   *new_node = NULL;
    
//     if (!(*lst_a))
//         return ;
//     tmp = *lst_a;
//     *lst_a = (*lst_a)->next;
//     t_lst *new_node = (t_lst *)malloc(sizeof(t_lst));
//     if (!new_node)
//         return ;
//     new_node->content = (t_element *)malloc(sizeof(t_element));
//     if (!new_node->content) 
//     {
//         free(new_node);
//         return;
//     }
//     new_node->content->value = tmp->content->value;
//     new_node->content->pack = tmp->content->pack;
//     new_node->content->rank = tmp->content->rank;
//     new_node->next = *lst_b;
//     *lst_b = new_node;
//     write(1, "pb\n", 3);
// }

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

