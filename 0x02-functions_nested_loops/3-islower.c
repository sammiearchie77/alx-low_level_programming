#include "main.h"

/**
 * is_lower - checks for lowercase character
 * @c: the character to check
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
