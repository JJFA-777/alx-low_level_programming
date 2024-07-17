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
	unsigned int i = 0;
	char *s;

	s = malloc(sizeof(str));

	if (s == NULL)
	{
		printf("Malloc failed");
		return (NULL);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[strlen(str)] = '\0';

	return (s);
}
