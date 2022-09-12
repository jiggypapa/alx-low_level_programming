#include <stdio.h>

/**
 * Main - Entry point into program to print
 * alphabets in lower case followed by a new line
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
