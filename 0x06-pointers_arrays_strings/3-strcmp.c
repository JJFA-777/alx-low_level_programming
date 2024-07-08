#include "main.h"
#include <string.h>

/**
 * _strcmp - Function to compare 2 strings.
 * @s1: first comparative string.
 * @s2: Second comparative string.
 *
 * Return: Difference between s1 and s2 values.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] && s2[i]) != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
