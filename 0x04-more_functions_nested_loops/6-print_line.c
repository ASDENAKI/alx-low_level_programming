#include "main.h"
/**
 * print_line - function prints line
 * @n: number of line it prints
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n != 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');

}
