#include "libft.h"

node *ft_lstmap(node *head, void *(*f)(void *),void (*del)(void *))
{
    node *new;
    node *old;
    if (!head || !f)
        return (NULL);
    new = NULL;
    while (head)
    {
        old = ft_lstnew (f(head->content));
        if (!old)
        {
            ft_lstclear(&old,(*del));
            return (NULL);
        }
        ft_lstadd_back(&new,old);
        head = head->next;
    }
    return (new);
}