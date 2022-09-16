#include "main.h"

/**
 * print_numbers - function that print all number (0-9)
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}	
