#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_rev - print a string in reverse followed by a new line.
 * @s: string that is passed into the program.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, a = 0, len = strlen(s);
	char *buffer = malloc(len + 1);

	if (buffer == NULL)
	{
		printf("Malloc failed\n");
		return;
	}

	for (i = len - 1; i >= 0; i--)
	{
		buffer[a] = s[i];
		a++;
	}
	buffer[len] = '\0';
	printf("%s\n", buffer);

	free(buffer);
}
