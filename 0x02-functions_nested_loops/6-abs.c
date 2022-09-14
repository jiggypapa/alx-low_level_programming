#include "main.h"
/**
 * _abs - Entry point checks for absolute value
 *
 * @c: is the int parameter
 * Return: 0
 */
int _abs(int c)
{
	if(c < 0)
	{
		c = c * -1;
		return (c);
	}
	return (0);
}
