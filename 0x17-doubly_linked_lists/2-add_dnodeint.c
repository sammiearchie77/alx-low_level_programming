#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_dnodeint - Adds a node to a single linked list
 * @head: A pointer to the pointer to the first element.
 * @n: The integer to initialize with.
 * Return: The address of the item just added.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *l;

	l = malloc(sizeof(dlistint_t));
	if (l)
	{
		l->n = n;
		l->prev = NULL;
		l->next = *head;
		if ((*head) != NULL)
			(*head)->prev = l;
		*head = l;
	}
	return (l);
}
