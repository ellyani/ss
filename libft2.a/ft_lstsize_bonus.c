#include "libft.h"

int ft_lstsize(node *head)
{
    int len = 0;
    if (!head)
        return 0;
    node *temp = head;
    while (temp->next !=NULL)
    {
        len++;
        temp = temp->next;
    }
    return (len);
}