#include "main.h"
/**
 * _isdigit - checks if character is a digit or not
 * @c: chracter to test
 * Return: 1 if true, 0 if false
 */
int _sdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
