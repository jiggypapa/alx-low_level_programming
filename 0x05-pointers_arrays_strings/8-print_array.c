#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of array integer
 * @a: first integer parameter
 * @n: second integer parameter
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	putchar(10);
}
