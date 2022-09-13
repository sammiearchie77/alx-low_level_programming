#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is an ascill character
 *
 * Return: 1 if c is lowercase, 0 otherrwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
