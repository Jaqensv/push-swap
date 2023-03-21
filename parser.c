/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MAIN <MAIN@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:15:12 by mde-lang          #+#    #+#             */
/*   Updated: 2023/03/11 08:48:49 by MAIN             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool    alpha(char **arg)
{
    int i;
    int j;

    i = -1;
    j = 0;
    while (arg[++i])
    {
        if (arg[i][0] == 45)
            j++;
        while (arg[i][j])
        {
            if (arg[i][j] < 48 || arg[i][j] > 57)
                return (false);
            j++;  
        }
        j = 0;
    }
    return (true);
}

bool    duplicata(t_lst *lst)
{
    t_lst   *tmp;
     
    while (lst)
    {
        tmp = lst->next;
        while (tmp)
        {
            if (tmp->content->value == lst->content->value)
                return (false);
            tmp = tmp->next;
        }
        lst = lst->next;
    } 
    return (true);
}

bool    size(t_lst *lst)
{
    while (lst)
    {
        if (lst->content->value < INT_MIN || lst->content->value > INT_MAX)
            return (false);
        lst = lst->next;
    }
    return (true);
}

bool    error(char **arg, t_lst *lst)
{
    alpha(arg);
    if (alpha(arg) == false)
        return (false);
    duplicata(lst);
    if (duplicata(lst) == false)
        return (false);
    size(lst);
    if (size(lst) == false)
        return (false);
    return (true);
}

void    parser(int argc, char **argv, t_lst **lst)
{
    char        **arg;
    int         i;
    t_element   *package;

    i = -1;
    if (argc == 2)
        arg = ft_split(argv[1], ' ');
    else
        arg = &argv[1];
    while (arg[++i])
    {
        package = malloc(sizeof(t_element));
        package->value = ft_atoi(arg[i]);
        ft_lstadd_back(lst, ft_lstnew(package));
    }
    if (error(arg, *lst) == false)
        return (write(2, "Error\n", 6), exit(1));
    ranking(arg, *lst);;
}
