#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long div = 2;
	long lprim = 0;

	while (num != 1)
	{
		if (num % div == 0)
		{
			num = num / div;
			lprim = div;
		}
		div += 1;
	}
	printf("%ld\n", lprim);
	return (0);
}
