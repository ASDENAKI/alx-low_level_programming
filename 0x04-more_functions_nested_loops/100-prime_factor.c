#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long i, j;
	long k = 612852475143;
	double x = sqrt(k);

	for (i = 1; i <= x; i++)
	{
		if (k % i == 0)
		{
			j = k / i;
		}
	}
	printf("%ld\n", j);
	return (0);
}
