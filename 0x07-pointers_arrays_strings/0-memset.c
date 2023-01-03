#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: source
 * @b: the byte
 * @n: buffer length
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < 0)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
