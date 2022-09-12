#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point prints the randomly generated value and check whether its greater than 5, less than 6 or 0
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greter than 5\n", n, l);
	}
	else if (l < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is equal to 0\n", n, l);
	}
	return (0);
}
