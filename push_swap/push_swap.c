/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:16:48 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/22 01:44:33 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *av[])
{
	int i;
	int j;
	p_list *a = NULL;
	p_list *b;
	p_list *new  = NULL;
	p_list *head;
	char **p;

	i = 1;
	b = NULL;
	if (ac == 1)
		return (0);
	while (av[i])
	{
		p = ft_split(av[i], ' ');
		if (!p[0])
		{
			write (1, "error", 5);
			exit(1);
		}
		j = 0;
		while (p[j])
		{
			head = a;
			while (head)
            {
                if (head->content == ft_atoi(p[j])) 
                {
                    write (1, "error", 5);
					exit(1);
                }
				head = head->next;
            }
			new = lstnew(ft_atoi(p[j]));
			new->index = -1;
			lstadd_back(&a, new);
			j++;
		}
		i++;
	}

	indexx(&a);
	sort_all(&a, &b);
	// while (b)
	// {
	// 	printf("\n%d\n index : %d\n", b->content, b->index);
	// 	b = b->next;
	// }
	// printf ("////////////////// \n");
	// while (a)
	// {
	// 	printf("\n%d\n index : %d\n", a->content, a->index);
	// 	a = a->next;
	// }
}
