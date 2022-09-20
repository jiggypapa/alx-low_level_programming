#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of array integer
 * @a: first integer parameter
 * @n: second integer parameter
 * Return: 0
 */
void print_array(int a, int n)
{
	int i = 0;

	for (n--; n <= 0; n--, i++)
	{
		printf("%d", a[i]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
