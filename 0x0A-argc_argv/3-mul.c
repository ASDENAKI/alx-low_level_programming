#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @a: count
 * @b: vector
 * Return: zero
 */
int main(int a, char *b[])
{
	int index, mul;

	if (a < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < a; index++)
	{
		mul = mul * atoi(b[index]);
	}
	printf("%d\n", mul);
	return (0);
}
