#include "list.h"

/**
 * print_listint - print all the elements of a linked list
 * @n: linked list of types listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t = num = 0;

	while (h)
	{
		print("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
