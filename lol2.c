#include "push_swap.h"

void    mirror_sort(t_lst **lst_a, t_lst **lst_b)
{ 
    int     i;
    int     j;
    int     arg_len;

    arg_len = ft_lstsize(*lst_a);
    j = 0;
    while (j++ < arg_len)
    {
        i = 0;
        while (i++ < arg_len)
        {  
            if ((*lst_a)->content->rank > (*lst_a)->next->content->rank)
                ra(lst_a, true);
            else
                pb(lst_a, lst_b);
        }
        while (*lst_b)
        {
            pa(lst_a, lst_b);
            if ((*lst_a)->content->rank > (*lst_a)->next->content->rank)
            {
                sa(lst_a, true);
                pb(lst_a, lst_b);
            }
            while (ft_lstsize(*lst_b) > 1 && (*lst_b)->content->rank < (*lst_b)->next->content->rank && (*lst_a)->content->rank > (*lst_a)->next->content->rank)
                ss(lst_a, lst_b);
            if (ft_lstsize(*lst_b) > 1 && (*lst_b)->content->rank < (*lst_b)->next->content->rank)
                sb(lst_b, true);
            if ((*lst_a)->content->rank > (*lst_a)->next->content->rank)
                sa(lst_a, true);
        }
    }
}
