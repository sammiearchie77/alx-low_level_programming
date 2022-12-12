/**
 * find - Test if a byte is in a string.
 * @str: The string.
 * @c: The character to look for.
 * Return: 1 if `c` occurs in `str`.
 *	   0 otherwise.
 */
int find(char *str, char c)
{
	int i = 0, res = -1;

	do {
		if (str[i] == c)
			res = i;
		i++;
	} while (res == -1 && str[i] != '\0');
	if (res == -1 && c == str[i])
		res = i;
	return (res);
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string.
 * @accept: The prefix substring.
 * Return: The number of bytes in `s` which consist only of bytes in `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i = 0;

	do {
		if (find(s, accept[i]) >= 0)
			res++;
		i++;
	} while (accept[i] != '\0');
	if (find(s, accept[i]) >= 0)
		res++;
	return (res);
}
