#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
		_putchar('\n');
	for (len = 0; len < n; a++)
	{
		for (space = 0; space < len; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
