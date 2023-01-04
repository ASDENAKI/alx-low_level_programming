#include "main.h"
/**
 * helperFunction - return 0 or 1
 * @num: number to be checked
 * @i: factor of the number
 * Return: 1 if prime 0 if not
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - a function thatchecks a number if prime or not
 * @n: the number
 * Return: 1 if it is, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
