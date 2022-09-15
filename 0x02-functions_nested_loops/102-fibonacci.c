#include <stdio.h>
/**
 * main - Entry point prints first 50
 *
 * Return: 0
 */
int main(void)
{
	unsigned long c, i, j, k;

	i = 0;
	j = 1;
	for (c = 0; c < 50; c++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (c == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
