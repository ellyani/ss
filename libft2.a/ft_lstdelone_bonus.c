#include "libft.h"

void ft_lstdelone(node *head, void (*del)(void *))
{
    if (!head || !del)
        return ;
    del(head->content);
    free(head);
    
}
