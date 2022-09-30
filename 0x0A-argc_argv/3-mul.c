#include "main"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 if true and 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b, prod;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		prod = a * b;
		printf("%d\n", prod);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
