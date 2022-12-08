#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements a dlistint_t list.
 * @h: The head of the given list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
