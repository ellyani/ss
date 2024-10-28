#include "libft.h"

void ft_lstclear(node **head, void (*del)(void *))
{
    node    *temp;
    if (head == NULL || del == NULL)
        return ;
    while (*head)
    {
        temp = (*head)->next;
        ft_lstdelone (*head ,del);
        *head = temp;
    }
}