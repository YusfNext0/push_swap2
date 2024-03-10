#include "push_swap.h"

void test_sort3(p_list **a)
{
    indexx(a);
    ///case 2:
    // if ((*a)->index > (*a)->next->index && (*a)->next->index > (*a)->next->next->index)
    // {
    //     sa(a);
    //     write (1, "\n", 1);
    //     rra(a);
    // }else if ((*a)->index < (*a)->next->index && (*a)->next->index > (*a)->next->next->index)
    // {
    //     if ((*a)->index > (*a)->next->next->index)
    //         rra(a);
    //     else
    //     {
    //         sa(a);
    //         write (1, "\n", 1);
    //         ra(a);
    //     }
    // }else if ((*a)->index > (*a)->next->index)
    // {
    //     if ((*a)->index < (*a)->next->next->index)
    //         sa(a);
    //     else
    //         ra(a);
    // }else
    //      rra(a);

    p_list *ptr;

    ptr = (*a);
    while ()
    {
        if (ptr->index > ptr->next->index)
            sa(&ptr);
        if (ptr->next->index > ptr->next->next->index)
            rra(&ptr);
    }
   
}
