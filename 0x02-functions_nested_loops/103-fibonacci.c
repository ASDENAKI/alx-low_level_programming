#include <stdio.h>
/**
 * main - prints out the sume of even valued terms
 *
 * Return: always 0
 */

int main(void)
{

	long b = 1, c = 2, sum = c;

	while (b + c < 4000000)
	{
		c += b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		b = c - b;

	}
	printf("%ld\n", sum);
	return (0);
}
