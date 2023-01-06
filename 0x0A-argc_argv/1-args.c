#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @a: count
 * @b: vector
 * Return: zero
 */
int main(int a, int *b[])
{
	printf("%d\n", a - 1);
	(void)b;
	return (0);
}
