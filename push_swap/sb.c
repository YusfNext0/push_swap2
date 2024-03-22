/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:27:36 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/18 02:43:31 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sb(p_list **b, int k)
{
    p_list  *temp;

    if (!(*b) || !(*b)->next)
        return;
    temp = (*b)->next;
    (*b)->next = temp->next;
    temp->next = (*b);
    (*b) = temp;
    if (k == 1)
        return;
    else 
        write (1, "sb\n", 3);
}
