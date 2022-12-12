#include <stdio.h>
#include "main.h"

/**
 * _pow - Computes the power of a number by another.
 * @a: The first number.
 * @n: The power to compute.
 * Return: a ^ n.
 */
int _pow(int a, int n)
{
	int i, res = a;

	if (n == 0)
		res = 1;
	else if (n > 1)
		for (i = 1; i < n; i++)
			res = res * a;
	return (res);
}


/**
 * char_to_int - Converts a char digit to its integer value.
 * @c: The ascii character.
 * Return: The integer value of c.
 */
int char_to_int(char c)
{
	int res;

	switch ((int)c)
	{
	case 48:
		res =  0;
		break;
	case 49:
		res =  1;
		break;
	case 50:
		res =  2;
		break;
	case 51:
		res =  3;
		break;
	case 52:
		res =  4;
		break;
	case 53:
		res =  5;
		break;
	case 54:
		res =  6;
		break;
	case 55:
		res =  7;
		break;
	case 56:
		res =  8;
		break;
	case 57:
		res =  9;
		break;
	default:
		res = 0;
	}
	return (res);
}






/**
 * order - Returns the order of an integer contained in a string.
 * @s: The string whose the order should be returned.
 * Return: The order of s.
 */
int order(char *s)
{
	int i = -1, o = 0, found_1st_int = 0;
	char tmp;

	do {
		tmp = s[++i];
		if (_isdigit(tmp))
		{
			o++;
			found_1st_int = 1;
		}
		else if (found_1st_int)
		{
			break;
		}
	} while (tmp != '\0');
	return (o);
}

/**
 * _atoi - Conversts a string to an integer.
 * @s: The string to convert
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int ci, i = -1, n = 0, sign = 1, res = 0, found_1st_int = 0;
	char tmp;

	n = order(s);
	do {
		tmp = s[++i];
		if (tmp == '-')
		{
			sign = sign * -1;
			found_1st_int = 1;
		}
		else if (found_1st_int)
		{
			break;
		}
	} while (tmp != '\0');
	found_1st_int = 0;
	i = -1;
	do {
		tmp = s[++i];
		if (_isdigit(tmp))
		{
			ci = char_to_int(tmp);
			res += (sign * ci * _pow(10, --n));
			found_1st_int = 1;
		}
		else if (found_1st_int)
		{
			break;
		}
	} while (tmp != '\0');
	return (res);
}
