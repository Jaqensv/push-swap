#include "push_swap.h"

void    hourglass_sort(t_lst **lst_a, t_lst **lst_b)
{ 
    int i;
    int arg_len;

    i = 0;
    arg_len = ft_lstsize(*lst_a);
    while (i < arg_len / 2)
    {
        if ((*lst_a)->content->rank > arg_len * 0.50)
            ra(lst_a, true);
        else
        {
            pb(lst_a, lst_b);
            i++;
        }
    }
    i = 0;
    while (i < arg_len / 4)
    { 
        if ((*lst_a)->content->rank > arg_len * 0.75)
            ra(lst_a, true);
        else
        {
            pb(lst_a, lst_b);
            i++;
        }
    }
    i = 0;
    while (i < arg_len / 8)
    {
        if ((*lst_a)->content->rank > arg_len * 0.875)
            ra(lst_a, true);
        else
        {
            pb(lst_a, lst_b);
            i++;

        }
    }
    i = 0;
    while (i < arg_len / 16)
    {
        if ((*lst_a)->content->rank > arg_len * 0.937)
            ra(lst_a, true);
        else
        {
            pb(lst_a, lst_b);
            i++;

        }
    }
    i = 0;
    while (i < arg_len / 32)
    {
        if ((*lst_a)->content->rank > arg_len * 0.969)
            ra(lst_a, true);
        else
        {
            pb(lst_a, lst_b);
            i++;

        }
    }
    i = 0;
    while (i < arg_len / 64)
    {
        if ((*lst_a)->content->rank > arg_len * 0.984)
            ra(lst_a, true);
        else
        {
            pb(lst_a, lst_b);
            i++;

        }
    }
    // while (*lst_b)
    //     pa(lst_a, lst_b);




}
