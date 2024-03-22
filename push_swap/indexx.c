/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:21:06 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/19 02:21:09 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int check_1(p_list *node)
// {
//     p_list *ptr;
//     ptr = node;

//     while (ptr)
//     {
//         if (ptr->index == -1)
//             return (-1);
//         ptr = ptr->next;
//     }
//     return (0);
// }
// int minx(p_list **a)
// {
//     p_list *ptr;
//     int min;

//     ptr = (*a);
//     min = ptr->content;
//     while (check_1(ptr) == -1 && ptr->index == -1)
//     {
//         if (min > ptr->content)
//         {
//             min = ptr->content;
//         }
//         ptr = ptr->next;
//     }
//     return (min);
// }
// void indexx(p_list **a)
// {
//     p_list *ptr;
//     int min;
//     p_list *target;
//     int i;

//     i = 0;
//     target = (*a);
//     ptr = (*a);
//     while (ptr)
//     {
//         target = (*a);
//         while (target)
//         {
//             min = minx(&target);
//             if (target->content == min && target->index == -1)
//             {
//                 target->index = i;
//                 i++;
//                 break;
//             }
//             target = target->next;
//         }
//         ptr = ptr->next;
//     }
// }

// =========
void indexx(p_list **a)
{
    p_list *current;
    p_list *second;
    int i;

    i = 0;
    current = (*a);
    while (current)
    {
        second = (*a);
        i = 0;
        while (second)
        {
            if (current->content > second->content)
            {
                i++;
                current->index = i;
                // printf ("\ni = %d ????   c = %d\n", i, current->content);
            }else if (current->index == -1)
                current->index = 0;
            second = second->next;
        }
        current = current->next;
    }
}
