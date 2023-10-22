#include <stdio.h>

/**
 * main - a function to print single digit base ten numbers using putchar
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
