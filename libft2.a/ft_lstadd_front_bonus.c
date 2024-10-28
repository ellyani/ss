#include "libft.h"

void	ft_lstadd_front(node **head, node *new)
{
	if (!head || !new)
		return ;
	new->next = *head;
	*head = new;
}

