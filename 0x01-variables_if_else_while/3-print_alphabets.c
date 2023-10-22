#include <stdio.h>

/**
 * main - function to print the lowercase and uppercase alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
