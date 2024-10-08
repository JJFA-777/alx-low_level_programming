#include "main.h"
#include <stdio.h>

/**
 * set_bit -  sets the value of a bit to 1 at a given index..
 * @n: int value.
 * @index: index, starting from 0, of the bit you want to get.
 *
 * Return: 1 if it works or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index); /*use 1UL bitmask to change value at index*/

	return (1);
}
