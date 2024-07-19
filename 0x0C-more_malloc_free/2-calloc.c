#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: number of elements of array.
 * @size: number of bytes per element.
 *
 * Return: pointer to array or NULL if failed.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	temp = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		temp[i] = 0;

	return (ptr);
}
