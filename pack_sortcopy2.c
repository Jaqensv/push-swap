#include "push_swap.h"

void    sort_3(t_lst **lst_a)
{
    t_lst   *lst_b;
    //int i;
    int count = 0;

    //i = -1;
    lst_b = NULL;
    if ((*lst_a)->content->rank < (*lst_a)->next->content->rank && (*lst_a)->next->content->rank < ft_lstlast(*lst_a)->content->rank)
        return ;
    ft_lstlast(*lst_a)->next = *lst_a;
    while (*lst_a)
    {
        if ((*lst_a)->content->rank == 1)
        {
            pb(lst_a, &lst_b);
            count++;
            break;
        }
        *lst_a = (*lst_a)->next;
    }
    ft_lstlast(*lst_a)->next = *lst_a;
    *lst_a = (*lst_a)->next;
    if ((*lst_a)->content->rank > (*lst_a)->next->content->rank)
        sa(lst_a, true);
    pa(lst_a, &lst_b);
    count += 2;
    printf("count: %d", count);
}

void    pack_sort(t_lst **lst_a, t_lst *lst_b, int pack_max)
{   
    int     i;
    int     found;
    int     count = 0;

    i = -1;
    ft_lstlast(*lst_a)->next = *lst_a;
    while (*lst_a && ++i <= pack_max)
    {
        found = 0;
        while (found < 2)
        {
            if ((*lst_a)->content->pack == i)
            {
                pb(lst_a, &lst_b);
                count++;
                found++;
            }
            else
                *lst_a = (*lst_a)->next;
        }
        if (lst_b && lst_b->content->rank < lst_b->next->content->rank)
        {
            sb(&lst_b, true);
            count++;
        }
    }
    while (lst_b)
    {
        pa(lst_a, &lst_b);
        printf("%lld\n", (*lst_a)->content->value);
        count++;
    }
    printf("Finished sort.\n");
    printf("Operations: %d\n", count);
}








