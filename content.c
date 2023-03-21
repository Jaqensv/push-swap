#include "push_swap.h"

void    packaging(t_lst *lst)
{
    lst->content->packer += 0.50;
    lst->content->pack = lst->content->packer;
}

void    ranking(char **arg, t_lst *lst)
{
    int     i;
    int     j;
    t_lst   *first;

    i = 0;
    first = lst;
    while (arg[i])
    {
        lst = first;
        while (lst)
        {
            j = -1;
            lst->content->rank++;
            while (arg[++j])
                if (ft_atoi(arg[i]) > ft_atoi(arg[j]))
                {
                    lst->content->rank++;
                    packaging(lst);
                }
            lst = lst->next;
            i++;
        }
    }
    lst = first;
}
