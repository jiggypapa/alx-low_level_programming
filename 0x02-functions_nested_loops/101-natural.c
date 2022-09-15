#include <stdio.h>
/**
 * main - Entry point compute and print
 *
 * Return: 0
 */
int main(void)
{
	int i, r;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			r += i;
		}
	}
	printf("%d\n", r);
	return (0);
}
