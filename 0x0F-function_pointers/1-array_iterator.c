#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function
 * @array: array being operated on
 * @size: size of the array
 * @action: the function with the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
