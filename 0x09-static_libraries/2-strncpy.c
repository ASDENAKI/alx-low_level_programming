#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
