#include "main.h"
/**
 * _strchr -  function that locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: Returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
