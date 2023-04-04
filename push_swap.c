/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:04 by mde-lang          #+#    #+#             */
/*   Updated: 2023/04/03 23:42:58 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_lst *lst_a, t_lst *lst_b)
{
	int	i;

	i = 0;
	printf("\nEtat des stacks :\n");
	while (lst_a || lst_b)
	{
		if (lst_a)
			printf("%d", lst_a->content->pack);
		else
			printf("  ");
		printf("  ");
		if (lst_b)
			printf("%d", lst_b->content->pack);
		else
			printf("  ");
		printf("\n");
		i++;
		if (lst_a)
		 lst_a = lst_a->next;
		if (lst_b)
			lst_b = lst_b->next;
	}
	printf("_   _\na   b\n\n");
}

int main(int argc, char **argv)
{
	t_lst	*lst_a;
	t_lst	*lst_b;
	
	lst_a = NULL;
	lst_b = NULL;
	parser(argc, argv, &lst_a);
	mirror_sort(&lst_a, &lst_b);
	print_stacks(lst_a, lst_b);
	return (0);
}
