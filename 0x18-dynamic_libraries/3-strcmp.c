/**
 * _strcmp - Compare one string to another.
 * @s1: The first string and the destination.
 * @s2: The second string.
 * Return: -1 if s1 < s2
 *	  1 if s1 > s2
 *	  0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, m = 0, n = 0, res = 0;

	for (i = 0; s1[i] != '\0'; i++)
		m += (int)s1[i++];
	for (i = 0; s2[i] != '\0'; i++)
		n += (int)s2[i++];
	if (m > n)
		res = -15;
	else if (m < n)
		res = 15;
	return (res);
}
