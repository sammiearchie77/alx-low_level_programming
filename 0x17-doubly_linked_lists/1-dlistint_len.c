#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - computes the length of the liked list..
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i = 0;

	tmp = h;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
