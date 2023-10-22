#include <stdio.h>

/**
 * main - function to print the lowercase alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	for (i = 'a' ; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
