#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for digits
 * @c: holds the digits
 * Return: 0 and 1 depending on the condition
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
