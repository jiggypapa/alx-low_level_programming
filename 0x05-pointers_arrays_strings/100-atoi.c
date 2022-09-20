#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: returns integer
 */
int _atoi(char *s)
{
	int si = 1;
	unsigned int n = 0;

	do{
		if (*s == '-')
		{
			si *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		break;

	} while (*s++);

	return (n * si);
}
