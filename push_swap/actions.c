#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && (str1[i] == str2[i]))
		i++;
	return (str1[i] - str2[i]);
}

void actions(char *str , p_list **a, p_list **b)
{
    if (ft_strcmp(str, "sa") == 0)
        sa(a);
    else if (ft_strcmp(str, "sb") == 0)
        sb(a);
    else if (ft_strcmp(str, "pa") == 0)
        pa(a, b);
    else if (ft_strcmp(str, "pb") == 0)
        pb(a, b);
    else if (ft_strcmp(str, "ra") == 0)
        ra(a);
    else if (ft_strcmp(str, "rb") == 0)
        rb(b);
    else if (ft_strcmp(str, "rr") == 0)
        rr(a, b);
    else if (ft_strcmp(str, "rra") == 0)
        rra(a);
    else if (ft_strcmp(str, "rrb") == 0)
        rrb(b);
    else if (ft_strcmp(str, "rrr") == 0)
        rrr(a, b);
    else 
        printf ("no");
    write (1, "\n", 1);
}
