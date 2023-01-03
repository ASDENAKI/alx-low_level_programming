#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: main string
 * @needle: searched
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;

		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (*j == '\0')
		{
			return (i);
		}
		haystack = i + 1;
	}
	return (0);
}
