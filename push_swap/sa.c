/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:33:55 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/08 21:26:38 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sa(p_list **a)
{
    p_list  *temp;
    
    // if (a)
    //     exit(0);
    temp = (*a)->next;
    (*a)->next = temp->next;
    temp->next = (*a);
    (*a) = temp;
    write (1, "sa", 2);
}
