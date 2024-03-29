/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:07:40 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/18 02:35:31 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pb(p_list **a, p_list **b)
{
    p_list  *temp;
    
    if (!(*a))
        return;
    temp = (*a);
    (*a) = (*a)->next;
    temp->next = (*b);
    (*b) = temp;
    write (1, "pb\n", 3);
}
