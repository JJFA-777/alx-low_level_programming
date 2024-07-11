#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string to be inserted.
 *
 * Return: 0 on success.
 */

void _puts_recursion(char *s)
{
	if (_putchar(*s) = '\0')
		return _putchar('\n');
	_putchar(*s);

	return _puts_recursive(*s + 1);
}
