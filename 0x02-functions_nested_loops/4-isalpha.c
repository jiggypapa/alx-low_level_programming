#include "main.h"
/**
 * _isalpha - Entry point checks if characte is lower or upper case
 *
 *@c: to checkthe charater
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
