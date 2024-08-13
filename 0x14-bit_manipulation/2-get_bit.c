#include "main.h"
#include <stdio.h>

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: string of 0 and 1 chars.
 * @index: index, starting from 0, of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;

	return (n & 1);
}
