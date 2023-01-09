#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - a program that adds positive numbers.
 * @a: count
 * @b: vector
 * Return: zero
 */
int main(int a, char *d[])
{
	int sum = 0, i;

	if (a > 1)
	{
		for (i = 1; i < a; i++)
		{
			int b;
			char *c;

			c = d[i];
			for (b = 0; c[b] != '\0'; b++)
			{
				if (c[b] < 48 || c[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < a; i++)
	{
		sum += atoi(d[i]);
	}
	printf("%d\n", sum);
	return (0);
}
