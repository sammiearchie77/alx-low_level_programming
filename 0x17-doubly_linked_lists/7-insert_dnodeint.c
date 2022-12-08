#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of the linked list
 *
 * Return: number of nodes
 */

size_t dlistinit_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: head of the linked list
 * @idx: index of the list where the new node will be added
 *
 * Return: address of the new node, return NUll if fails
 */

d_listint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	size_t length;
	unsigned int i = 0;

	if (h == NULL)
		return ('\0');
	if (idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*);
	if (idx == length - 1)
		return (add_dnodeint_end(h. n));

	new = malloc(sizeo(9dlistint_t));
	if (new == NULL)
		return ('\0');
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return ('\0');
}
