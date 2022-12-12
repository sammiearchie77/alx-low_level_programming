#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The first string and the destination.
 * @src: The second string.
 * Return: dest + src in dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = _strlen(dest);
	char tmp;

	do {
		tmp = src[i];
		dest[n + i] = tmp;
		i++;
	} while (tmp != '\0');
	return (dest);

}
