/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:19:24 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/22 01:42:44 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_sort(p_list *ptr)
{
    p_list  *p;

    p = ptr;
    while (p->next)
    {
        if (p->index > p->next->index)
            return (1);
        p = p->next;
    }
    return (0);
}
void test_sort3(p_list **a)
{
    // if ((*a)->index > (*a)->next->index && (*a)->next->index > (*a)->next->next->index)
    // {
    //     sa(a, 0);
    //     write (1, "\n", 1);
    //     rra(a ,0);
    // }else if ((*a)->index < (*a)->next->index && (*a)->next->index > (*a)->next->next->index)
    // {
    //     if ((*a)->index > (*a)->next->next->index)
    //         rra(a, 0);
    //     else
    //     {
    //         sa(a, 0);
    //         write (1, "\n", 1);
    //         ra(a, 0);
    //     }
    // }else if ((*a)->index > (*a)->next->index)
    // {
    //     if ((*a)->index < (*a)->next->next->index)
    //         sa(a, 0);
    //     else
    //         ra(a, 0);
    // }else
    //      rra(a, 0);
    while (check_sort((*a)) == 1)
    {
        if ((*a)->index > (*a)->next->index)
            sa(a , 0);
        if ((*a)->next->index > (*a)->next->next->index)
            rra(a, 0);
    }
    
}
