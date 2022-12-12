/**
 * _memcpy - Copies memory from one area to another.
 * @src: The source area.
 * @dest: The destination area.
 * @n: The length of the memory area
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
