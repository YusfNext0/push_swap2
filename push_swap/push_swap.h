/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:16:52 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/19 04:06:56 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct n_list
{
	int				content;
	int				index;
	struct n_list	*next;
}	p_list;

int	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	lstadd_back(p_list **lst, p_list *new);
p_list	*lstnew(int content);
p_list	*lstlast(p_list *lst);
void	lstadd_front(p_list **lst, p_list *new);
void	sa(p_list **a,int k);
void	sb(p_list **b,int k);
void  	ss(p_list **a, p_list **b);
void	pa(p_list **a, p_list **b);
void	pb(p_list **a, p_list **b);
void    ra(p_list **a, int k);
void    rb(p_list **b, int k);
void    rr(p_list **a, p_list **b);
void    rra(p_list **a, int k);
void    rrb(p_list **b, int k);
void    rrr(p_list **a, p_list **b);
void	test_sort3(p_list **a);
void 	indexx(p_list **a);
void    test_sort5(p_list **a, p_list **b);
int	lstsize(p_list *lst);
void    sort_all(p_list **a, p_list **b);

#endif