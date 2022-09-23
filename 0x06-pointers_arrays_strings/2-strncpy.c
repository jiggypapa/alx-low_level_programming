#include "main.h"
/**
* _strncpy – Concatenate two strings but add number of bytes
* @dest: destination string copy buffer
* @src: source string
* @n: integer parameter max number of byte copied
* Return: Always 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
