#include "main.h"

/**
 *print_line - prints a line with an _ based on parameter 'a'
 *@param a: number of underscores to print
 *
 * Return: void
 */
void print_line(int a)
{
	int x;

	for (x = 0; x < a; x++)
	{
		if (x < 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
