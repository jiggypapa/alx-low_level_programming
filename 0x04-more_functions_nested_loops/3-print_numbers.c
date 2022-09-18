#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints 0 to 9 integers
 *
 * Return: void
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
