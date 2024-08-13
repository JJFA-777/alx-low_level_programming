#include "main.h"
#include <stdio.h>


/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit, printed = 0;

	bit = sizeof(n) * 8;

	while (bit--)
	{
		if ((n >> bit) & 1)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}

	if (!printed)
		_putchar('0');
}
