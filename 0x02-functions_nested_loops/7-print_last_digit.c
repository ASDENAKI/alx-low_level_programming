#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints last digit of a number
 * @n: is an integer
 * Return: the last digit of a number
 */

int print_last_digit(int n)

{
	int i;

	if (n < 0 || n == -2147483648)
		n = -n;
	i = n % 10;

	_putchar(i + '0');
	return (i);
}
