#include "libft.h"

node *ft_lstnew(void *content)
{
    node *new_node = NULL;
    new_node =(node *)malloc(sizeof(node));
    if (new_node == NULL)
        return (NULL);
    new_node->content = content;
    new_node->next =NULL;
    return (new_node);

}