#include "main.h"
#include "string.h"
/**
 * puts2 - prints every other character of a string
 * @str: holds the string
 */

void puts2(char *str)
{
	int i, j;

	i = strlen(str);

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
