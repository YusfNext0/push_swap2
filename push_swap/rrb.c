/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:26:09 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/19 02:12:47 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrb(p_list **b, int k)
{
    p_list *last;
    p_list *befor;

    if (!(*b) || !(*b)->next)
        return;
    befor = (*b);
    last = lstlast((*b));
    while (befor->next->next)
       befor = befor->next;
    befor->next = NULL;
    last->next = (*b);
    (*b) = last;
    if (k == 1)
        return;
    else
        write (1, "rrb\n", 4);
}
