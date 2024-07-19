#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers arranged
 * from min to max.
 * @min: minimum value in array.
 * @max: max value in array.
 *
 * Return: pointer to new array.
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
