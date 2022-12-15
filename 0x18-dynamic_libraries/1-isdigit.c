#include "main.h"

/**
 * _isdigit - checks if character is a digit or not
 * @c: chracter to test
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
