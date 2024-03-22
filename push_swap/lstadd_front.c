/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:21:44 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/19 02:21:45 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	lstadd_front(p_list **lst, p_list *new)
{
	p_list	*temp;

	if (!lst)
		return ;
	if (!*lst && lst)
		*lst = new;
	else
	{
		temp = *lst;
		new->next = temp;
		*lst = new;
	}
}
