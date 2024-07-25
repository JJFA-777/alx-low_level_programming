#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a funnction given as a parameter on
 * each element of an array
 * @array: array to be iterated upon.
 * @size: size of array.
 * @action: pointer to function.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
