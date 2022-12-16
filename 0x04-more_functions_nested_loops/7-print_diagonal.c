#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n != 0)
		{
			for (j = 0; j <= i; j++)
			{
			_putchar(' ');
			}
			_putchar('\\');
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
