#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	return (name);
}