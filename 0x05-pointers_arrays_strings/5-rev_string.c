#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int len, i, h;
	char tem;

	for (len = 0; s[len] != '\0'; len++)
	i = 0;
	h = len / 2;

	while (h--)
	{
		tem = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = tem;
		i++;
	}
}
