#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The memory area on wich we will store b.
 * @b: The value to store.
 * @n: The length of the memory area
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
