#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments it receives.
 * @a: counter
 * @b: vector
 * Return: zero
 */
int main(int a, int *b[])
{
	int n;

	for (n = 0; n < a; n++)
	{
		printf("%s\n", b[n]);
	}
	return (0);
}
