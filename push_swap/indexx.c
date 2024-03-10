#include "push_swap.h"

int check_1(p_list *node)
{
    p_list *ptr;
    ptr = node;

    while (ptr)
    {
        if (ptr->index == -1)
            return (-1);
        ptr = ptr->next;
    }
    return (0);
}
int minx(p_list **a)
{
    p_list *ptr;
    int min;

    ptr = (*a);
    min = ptr->content;
    while (check_1(ptr) == -1 && ptr->index == -1)
    {
        if (min > ptr->content)
        {   
            min = ptr->content;
        }
        ptr = ptr->next;
    }
    return (min);
}
void indexx(p_list **a)
{
    p_list *ptr;
    int min;
    p_list *target;
    int i;

    i = 0;
    target = (*a);
    ptr = (*a);
    while (ptr)
    {
        target = (*a);
        while (target)
        {
            min = minx(&target);
            if (target->content == min && target->index == -1)
            {
                target->index = i;
                i++;
                break;
            }
            target = target->next;
        }
        ptr = ptr->next;
    }
}
