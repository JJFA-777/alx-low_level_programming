#include "main.h"

/**
 * print_numbers - print numbers 0-9 
 * excluding numbers 2 and 4
 *
 * @a - initialization of loop
 * 
 * Return: void
 */

void print_most_numbers(void)
{
        int a;

        for (a = 0; a < 10; a++)
        {
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
                	_putchar('0' + a);
		}
        }
        _putchar('\n');
}
