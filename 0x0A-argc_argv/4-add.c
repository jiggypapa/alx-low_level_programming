#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int nun;
	int sum = 0;

	if (argc > 1)
	{
		for (num = 1; num < argc; num++)
		{
			int b;
			char *str;

			str = argv[num];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (num = 1; num < argc; num++)
	{
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
