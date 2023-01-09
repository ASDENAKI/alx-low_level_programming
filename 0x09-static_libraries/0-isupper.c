#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks upper case characters
 * @c: holds the characters
 * Return: Always 0 or 1 depending pn the condition
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
