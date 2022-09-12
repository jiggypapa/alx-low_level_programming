#include <stdio.h>

/**
 * main - Entry point into program
 *
 * Description: Using the main function
 * this program prints Alphabets
 * Return: Always 0 (Success)
 */
/* main function code goes here*/
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
