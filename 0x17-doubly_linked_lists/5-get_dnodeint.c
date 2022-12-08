#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t linked list
 * @head: head of the linked list
 * @index: index of node to be returned
 *
 * Return: node, if it does not exist NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp != NULL && (i < index))
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
