#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of program
 *
 * Return: void
 *
 */
int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
