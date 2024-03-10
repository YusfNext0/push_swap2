/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:48:42 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/05 12:02:41 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_num( int n)
{
	int	count;

	count = 1;
	while (n / 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*p;
	int				count;
	unsigned int	nb;

	count = c_num(n);
	if (n < 0)
	{
		nb = -n;
		count++;
	}
	else
		nb = n;
	p = malloc(count + 1);
	if (!p)
		return (NULL);
	p[count] = '\0';
	count--;
	while (count >= 0)
	{
		p[count--] = (nb % 10) + 48;
		nb = (nb / 10);
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
