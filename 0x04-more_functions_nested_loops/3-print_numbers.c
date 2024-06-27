#include "main.h"

/**
 * print_numbers - print numbers 0-9
 * @a - initialization of loop
 * 
 * Return: void
 */

void print_numbers(void)
{
	int a;

        for (a = 0; a < 10; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
