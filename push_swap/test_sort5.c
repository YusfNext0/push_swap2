/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:19:33 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/22 01:43:21 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    test_sort5(p_list **a, p_list **b)
{
    while (lstsize(*a) > 3)
    {  
        if ((*a)->index == 0)
            pb(a,b);
        else if ((*a)->index == 1 && *b)
            pb(a,b);
        else
            ra(a, 0);
    }
    test_sort3(a);
    pa(a, b);
    pa(a, b);
}
