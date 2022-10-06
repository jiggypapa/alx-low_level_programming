#include "main.h"
/**
 * _islower - Entry point to check alphabets
 *
 *@c: Character to test
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
