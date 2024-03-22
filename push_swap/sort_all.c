/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:22:37 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/22 11:46:54 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_max(p_list **stack)
{
    p_list *a;
    int     max;

    a = *stack;
    max = a->index;
    while (a)
    {
        if (max < a->index)
            max = a->index;
        a = a->next;
    }
    return (max);
}
int check_sort_final(p_list *ptr)
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
int check_middle(p_list *a, p_list *b)
{
    int size_lst;
    int i;
    
    i = 0;
    size_lst = lstsize(b);
    while ((b))
    {
        if (((a)->index - 1) == (b)->index && i <= (size_lst / 2))
            return (1);
        (b) = (b)->next;
        i++;
    }
    return (0);
} 
void    sort_all(p_list **a, p_list **b)
{
    int p1;
    int p2;

    p2 = 0;
    ////// parte 1 :
    while (lstsize(*a) > 3)
    {
        p1 = lstsize(*a) / 6 + p2;
        p2 += lstsize(*a) / 3;
        while (lstsize(*b) < p2)
        {
            if ((*b) && (*b)->index < p1)
                rb(b, 0);
            if ((*a)->index < p2)
                pb(a, b);
            else if ((*a)->index >= p2)
                ra(a, 0);
        }
    }
    test_sort3(a);
    ////// parte 2 :
    while (lstsize((*b)) > 0)
    {
        if (((*a)->index - 1) == (*b)->index)
                pa(a, b);
        else if(((*a)->index - 1) == lstlast((*b))->index)
        {
            rrb(b, 0);
            pa(a, b);
        }
        else if (check_max(a) == (lstlast(*a)->index))
        {   
            pa(a, b);
            ra(a, 0);
        }
        ///// parte 4 :
        else if ((*b)->index > lstlast(*a)->index)
        {
            pa(a, b);
            ra(a, 0);
        }else if (lstlast(*b)->index > lstlast(*a)->index)
        {
            rrb(b, 0);
            pa(a, b);
            ra(a, 0);
        }else if (((*a)->index - 1) == lstlast(*a)->index)
            rra(a, 0);
        else if (check_middle((*a), (*b)) == 1)
            rb(b, 0);
        else
            rrb(b, 0);
    }
    while (check_sort_final(*a) == 1)
    {
        rra(a, 0);
    }
}
  