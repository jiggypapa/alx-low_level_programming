#include "main.h"
/**
 * print_rev - string in reverse
 * @s: string to print in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
