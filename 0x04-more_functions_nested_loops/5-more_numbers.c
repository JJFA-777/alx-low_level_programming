#include "main.h"

/**
 * more_numbers - print numbers 0-14, 10 times
 * @a - initialization of 10 lines
 * @b - initialization of digit variable
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b < 9)
			{
				_putchar('0' + b);
			}
			else
			{
				_putchar('0' + b / 10);
				_putchar('0' + b % 10);
			}
		}
		_putchar('\n');
	}
}
