#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 * in newly allocated memory.
 * @s1: First string to concatenate.
 * @s2: second string to concatenate.
 *
 * Return: Pointer to new string or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	len = len1 + len2;

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	str[len] = '\0';

	return (str);
}
