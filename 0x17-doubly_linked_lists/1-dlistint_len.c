#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	temp = h;

	while(temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
