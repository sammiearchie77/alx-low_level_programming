#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that print all number (0-9)
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}	
