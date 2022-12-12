#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The first string and the destination.
 * @src: The second string.
 * @n: The number of byte to copy from src.
 * Return: dest + src[0 to n] in dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = _strlen(dest), m = _strlen(src);

	if (n > m)
		n = m;
	do {
		dest[l + i] = src[i];
		i++;
	} while (i < n);
	return (dest);
}
