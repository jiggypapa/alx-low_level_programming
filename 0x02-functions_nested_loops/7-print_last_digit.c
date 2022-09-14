#include "main.h"
/**
 * print_last_digit - Entry point of program which prints last digit of a num
 *
 * @n: parameter to display last digit of a number
 * Return: 0
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');

	return (ld);
}
