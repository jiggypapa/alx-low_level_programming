#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line
 * @n: parameter
 * Return: return void nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
