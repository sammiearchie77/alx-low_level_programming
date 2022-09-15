#include "main.h"

/**
 * print_numbers - function that print all number (0-9)
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a < '9'; a++)
	{
		_putchar(a);
	}
	putchar('\n');
}	
