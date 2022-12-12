#include "main.h"
/**
 * _islower - Checks for lowercase character.
 * @c: The decimal representation of the characteur to check.
 * Return: 1 if c is lowercase. 0 otherwise.
 */
int _islower(int c)
{
	int a = 0;

	if (c > 96 && c < 123)
	{
		a = 1;
	}

	return (a);
}
