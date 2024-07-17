#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer in memory which contains a copy of a the string.
 * @str: duplicate char.
 *
 * Return: pointer to duplicate string, or NULL if it fails.
 */

char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *s;

	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		printf("Malloc failed");
		return (NULL);
	}
	for (i = 0; i < len; i++)
		s[i] = str[i];

	s[len] = '\0';

	return (s);
}
