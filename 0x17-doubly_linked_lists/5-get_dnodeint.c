#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t linked list
 * @head: head of the linked list
 * @index: index of node to be returned
 *
 * Return: node, if it does not exist NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint *head, unsigned int index)
{
	dlistint *temp;
	unsigned int i = 0;

	if (head == NULL)
		return ('\0');
	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return ('\0');
}
