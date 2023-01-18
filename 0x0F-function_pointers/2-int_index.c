#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: array searched from
 * @size: size of the array
 * @cmp: the function with the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
