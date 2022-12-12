/**
 * _isdigit - Checks for digit character.
 * @c: The charactere to check.
 * Return: 1 if c is a digit.
 *	   0 otherwise
 */
int _isdigit(int c)
{
	int r = 0;

	if ((c > 47) && (c < 58))
		r = 1;
	return (r);
}
