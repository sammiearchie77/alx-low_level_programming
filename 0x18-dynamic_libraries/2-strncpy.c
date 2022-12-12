#include "main.h"

/**
 * _strncpy - Copy one string to another.
 * @dest: The first string and the destination.
 * @src: The second string.
 * @n: The number of byte to copy from src.
 * Return: dest + src[0 to n] in dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
