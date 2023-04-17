/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:04 by mde-lang          #+#    #+#             */
/*   Updated: 2023/03/24 01:52:47 by MAIN             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_lst   *lst_a;
    t_lst   *lst_b;
    //int     pack_max;
    
    lst_a = NULL;
    lst_b = NULL;
    parser(argc, argv, &lst_a);
    //pack_max = ft_lstsize(lst_a) / 2 - 1;
    // if (ft_lstsize(lst_a) == 3)
    //     sort_3(&lst_a);
    // if (ft_lstsize(lst_a) > 3)
    //     pack_sort(&lst_a, lst_b, pack_max);
    mirror_sort(&lst_a, &lst_b);
    printf("Numbers: %d\n", argc-1);
    return (0);
}
