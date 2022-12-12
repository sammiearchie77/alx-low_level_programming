#include "main.h"
/**
 * _strpbrk - Searches a string for set of bytes.
 * @s: The main string.
 * @accept: The matching string.
 * Return: A pointer to the first occurrence in the string `s` 
 * 	   of any of the bytes in `accept`.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, tmp, min = -1;
	char *res = 0;

	do {
		tmp = find(s, accept[i++]);
		if (tmp > 0 && tmp < min)
			min = tmp;
	} while (accept[i] != '\0');
/*	tmp = find(s, accept[i]);
	if (tmp > 0 && tmp < min)
		min = tmp;*/
	if (min > 0)
		res = s + min;
	return (res);
}
