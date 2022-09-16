#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Fizz buzz
 * Return: void
 */
int main(void)
{
	int i;

	while (i++ < 100)
	{
		if ((i % 3 == 0) && (i & 5))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
