#include <stdio.h>
/**
 * main - Entry point Fibonacci
 *
 * Return: 0
 */
int main(void)
{
	unsigned long c, i, j, k, sums;

	i = sums = 0;
	j = 1;
	for (c = 0; c < 50; c++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
