#include "main"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0 if true and 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}	
	else
	{
		printf("Error\n");
		return (1);
	}
}
