#include "main.h"
/**
 * _strcpy - Copies a string to a buffer.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: dest wich will be a copy of src.
 */
char *_strcpy(char *dest, char *src)
{
	int i, n = _strlen(dest);

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
