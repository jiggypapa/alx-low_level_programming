#include "main.h"
/**
 * _strlen - check string length
 * @s: parameter string to check
 * Return: returns int as integer
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}

	return (l);
}
