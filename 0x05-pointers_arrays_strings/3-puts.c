#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string followed by a new line
 * @str: string to print parameter
 * Return: nothing
 */

void _puts(char *s)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
