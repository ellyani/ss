#include "libft.h"

void ft_lstiter(node *head, void (*f)(void *))
{
    node    *temp;
    if (!head)
        return ;
    temp = head;
    while (temp)
    {
        (*f)(temp->content);
        temp =temp->next;
    }
}