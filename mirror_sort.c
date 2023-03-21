#include "push_swap.h"


void    mirror_sort(t_lst **lst_a, t_lst **lst_b)
{ 
    int         i;
    int         arg_len;
    //static int  s = 0;
    //int         j = 0;
    bool        on;

    i = 0;
    arg_len = ft_lstsize(*lst_a);
    on = false;
    ///////////////////////////////////////
    while (i < arg_len)
    {
        if (ft_lstsize(*lst_b) >= arg_len / 2)
        {
            while (ft_lstsize(*lst_a) > arg_len / 4)
            {
                if ((*lst_a)->content->rank <= arg_len * 0.25)
                    ra(lst_a, true);
                if ((*lst_a)->content->rank <= arg_len * 0.50 && (*lst_a)->content->rank > arg_len * 0.25) 
                    pb(lst_a, lst_b);
            }
        }
        if ((*lst_a)->content->rank <= arg_len * 0.50)
            ra(lst_a, true);
        if ((*lst_a)->content->rank > arg_len * 0.50 && (*lst_a)->content->rank < arg_len * 0.75)
        {
            pb(lst_a, lst_b);
            on = true;
        }
        if ((*lst_a)->content->rank >= arg_len * 0.75)
        {
            pb(lst_a, lst_b);
            if (on == true)
                rb(lst_b, true);
        }
        i++;
        /////////////////////////////////////
        // while (ft_lstsize(*lst_a) < arg_len / 2)
        //     pa(lst_a, lst_b);
        /////////////////////////////////////

    }
}
