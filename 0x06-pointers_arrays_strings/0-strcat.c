#include "main.h"
/**
 * *_strcat - Entry point concatenate two stringd
 * @dest: string destination
 * @src: string source
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
       	int c = 0;
	int n = 0;
	
	while (*dest[i] != '\0')
	{
		i++;
	}
	while (*src[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}
