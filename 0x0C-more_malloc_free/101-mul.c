#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two positive numbers
 * @argc: the argument
 * @argv: the arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
