#include "libft.h"

node *ft_lstlast(node *head)
{
    if (head == NULL)
        return (NULL);
    while (head->next != NULL)
    {
        head = head->next;
    }
    return (head);
    
}