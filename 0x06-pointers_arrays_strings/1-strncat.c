#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);
	return (dest);
}
