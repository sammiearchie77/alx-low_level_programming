#include "main.h"
/**
 * _isalpha - Checks for alphabetic character.
 * @c: The decimal representation of the character to check.
 * Return: 1 if c is a letter, lowercase or lowercase. 0 otherwise.
 */
int _isalpha(int c)
{
	int a = 0;

	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		a = 1;
	}

	return (a);
}
