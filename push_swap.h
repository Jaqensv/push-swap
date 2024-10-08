/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:10:31 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/26 06:51:23 by MAIN             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "inc_libft/libft.h"

void	parser(int argc, char **argv, t_lst **lst);
void	ranking(char **arg, t_lst *lst);
void	packaging(t_lst *lst);
void	sa(t_lst **lst_a, bool one_write);
void	sb(t_lst **lst_b, bool one_write);
void	ss(t_lst **lst_a, t_lst **lst_b);
void	pa(t_lst **lst_a, t_lst **lst_b);
void	pb(t_lst **lst_a, t_lst **lst_b);
void	ra(t_lst **lst_a, bool one_write);
void	rb(t_lst **lst_b, bool one_write);
void	rr(t_lst **lst_a, t_lst **lst_b);
void	rra(t_lst **lst_a, bool one_write);
void	rrb(t_lst **lst_b, bool one_write);
void	rrr(t_lst **lst_a, t_lst **lst_b);
void	mirror_sort(t_lst **lst_a, t_lst **lst_b, int arg_len);
t_lst	*prev_last(t_lst *lst, t_lst *tmp);
t_xtrem	find_xtrem(t_lst *lst_b);
void	print_stacks(t_lst *lst_a, t_lst *lst_b);
void	mini_sort(t_lst **lst_a, t_lst **lst_b);
void	back_xtrem(t_lst **lst_a, t_lst **lst_b, t_xtrem xtrem, bool *on_off);
void	back_to_a(t_lst **lst_a, t_lst **lst_b);
void	chuncks(t_lst **lst_a, t_lst **lst_b, int arg_len, int fract);
void	initial_order(int argc, char **arg);
void	free_split(int argc, char **arg);

#endif