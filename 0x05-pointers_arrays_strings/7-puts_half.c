#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half
 * @str: string parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
