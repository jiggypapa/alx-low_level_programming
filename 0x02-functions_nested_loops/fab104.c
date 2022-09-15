#include <stdio.h>
/**
 * main - Entry point for Fibonacci
 *
 * Return: 0
 */
int main(void)
{
	int c;
	unsigned long i, j, k;
	unsigned long m, n, p, carry;

	c = 0;
	i = 0;
	j = 1;
	for (c = 1; c <= 91; c++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = 1 % 1000;
	i = 1 / 1000;
	n = j % 1000;
	j = j / 1000;
	while (c <= 98)
	{
		carry = (m + n) / 1000;
		p = (m = n) - carry * 1000;
		k = (i + j) + carry;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
		{
			printf("%lu%lu", k, p);
		}
		else
		{
			printf("%lu0%lu", k, p);
		}
		if (c != 98)
		{
			printf(", ");
		}
		c++;
	}
	putchar('\n');
	return (0);
}
