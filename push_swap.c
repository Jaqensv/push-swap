/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:10:31 by mde-lang          #+#    #+#             */
/*   Updated: 2023/05/04 19:53:23 by MAIN             ###   ########.fr       */
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
			printf("%d", lst_a->content->rank);
		else
			printf("  ");
		printf("  ");
		if (lst_b)
			printf("%d", lst_b->content->rank);
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
void	free_split(int argc, char **arg)
{
	int	i;

	i = -1;
	if (argc != 2)
		return ;
	while (arg[++i])
		free(arg[i]);
	free(arg);
}

int	main(int argc, char **argv)
{
	t_lst	*lst_a;
	t_lst	*lst_b;
	int		arg_len;

	lst_a = NULL;
	lst_b = NULL;
	parser(argc, argv, &lst_a);
	arg_len = ft_lstsize(lst_a);
	if (ft_lstsize(lst_a) == 3 || ft_lstsize(lst_a) == 5)
		mini_sort(&lst_a, &lst_b);
	else
		mirror_sort(&lst_a, &lst_b, arg_len);
	//print_stacks(lst_a, lst_b);
	system("leaks a.out");
	return (0);
}
////////// CHECKS LES HEADERS
////////// CHECK LEAKS
////////// FREE SPLIT
////////// Si aucun paramètre n’est spécifié, le programme ne doit rien afficher et rendre
////////// l’invite de commande.