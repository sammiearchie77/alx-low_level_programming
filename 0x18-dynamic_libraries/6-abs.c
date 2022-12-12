#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The number whose the absolute is computed.
 * Return: n if n is greater than or equal to 0.
 *	  -n if n is less than zero.
 */
int _abs(int n)
{
	int a = n;

	if (n < 0)
	{
		a = -n;
	}
	return (a);
}
