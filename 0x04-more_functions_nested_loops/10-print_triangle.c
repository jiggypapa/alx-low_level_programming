#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: size parameter if triangle
 * Return: return nothing
 */
void print_triangle(int size)
{
	int in1, in2;

	if (size > 0)
	{
		for (in1 = 1; in1 <= size; in1++)
		{
			putchar(' ');
		}
		for ((in2 = size - in1); in2 < in1; in2++)
		{
			putchar('#');
		}
		if (in1 == size)
		{
			continue;
		}

		putchar('\n');
	}
}
