#include <stdio.h>

/**
* main - Entry point into program to print the alphabets in lower case
* and then in upper case.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char letter;
	
	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A' ; letter <= 'Z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
