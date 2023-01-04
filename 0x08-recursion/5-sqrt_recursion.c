#include "main.h"
/**
 * helperFunction - checks if sqrt exist
 * @num: the number
 * @psqrt: possible sqrt of the number
 * Return: sqrt of the number or -1 for error
 */
int helperFunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperFunction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: the number
 * Return: the natural square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
