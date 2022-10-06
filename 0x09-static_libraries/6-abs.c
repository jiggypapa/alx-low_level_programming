#include "main.h"
/**
 * _abs - Entry point checks for absolute value
 *
 * @c: is the int parameter
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c = c * -1);
}
