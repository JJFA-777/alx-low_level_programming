#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  Function that print's name using function pointers.
 * @name: string to be passed into function.
 * @f: function pointer that takes a char * and returns void.
 *
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
