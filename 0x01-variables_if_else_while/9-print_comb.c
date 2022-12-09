#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

		for (i = 0; i < 100; i++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
