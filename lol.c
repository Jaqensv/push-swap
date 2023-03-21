#include "push_swap.h"

void    mirror_sort(t_lst **lst_a, t_lst **lst_b)
{ 
    int i;
    int j;
    int arg_len;
    float dna;

    i = 0;
    j = 0;
    arg_len = ft_lstsize(*lst_a);
    dna = 50;
    while (*lst_a)
    {
        while (i < arg_len / dna)
        {
            if ((*lst_a)->content->pack <= arg_len / dna)
            {
                pb(lst_a, lst_b);
                if (ft_lstsize(*lst_b) > 1)
                    if ((*lst_b)->content->rank < (*lst_b)->next->content->rank)
                        sb(lst_b, true);
            }
            else
            {
                ra(lst_a, true);
                i++;
            }
        }
        // while (i > 0)
        // {
        //     pa(lst_a, lst_b);
        //     i--;

        // }
        i = 0;
        j++;
        dna -= 0.025;
    }





}