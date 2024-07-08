#include "main.h"

/**
 * reverse_array - reverse the index of values of an array.
 * @a: array of integers.
 * @n: number of elements to swap.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
