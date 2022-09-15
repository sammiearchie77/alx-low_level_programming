#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long factor = 612852475143, div;

	while (div < (factor / 2))
	{
		if ((factor % 2) == 0)
		{
			factor /= 2;
			continue;
		}
		for (div = 3; div < (factor / 2); div += 2)
		{
			if ((factor % div) == 0)
				factor /= div;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
