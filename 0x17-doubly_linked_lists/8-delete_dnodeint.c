#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: The first element of the list.
 * @index: The position of the node to delete.
 * Return: 1 if failure. -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	tmp = *head;
	while ((tmp->next != NULL) && (i < index))
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp)
	{
		if (tmp->prev)
			tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
