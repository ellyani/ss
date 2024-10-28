#include "libft.h"

void ft_lstadd_back(node **head, node *new_node)
{
    if (new_node == NULL)
        return ;
    if (*head != NULL)
    {
        ft_lstlast (*head)->next = new_node;
    }
    else 
    {
        *head = new_node;
    }
}