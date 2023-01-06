#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @args: count
 * @argv: vector
 * Return: zero
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
