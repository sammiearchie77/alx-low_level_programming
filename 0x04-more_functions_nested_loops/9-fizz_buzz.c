#include <stdio.h>
i
/**
 * main - entry point
 *
 * Description: Fizz buzz
 * Return: void
 */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%n", "\n", n);
	}
	return (0)
}
