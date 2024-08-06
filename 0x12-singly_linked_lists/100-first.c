#include <stdio.h>

/**
* print_first - prints a specific message before the main function is executed.
*
* This function is marked to be executed before the main function using the
* constructor attribute.
*/
void print_first(void) __attribute__((constructor));

/**
* print_first - prints before main.
*
* Return: void
*/

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
