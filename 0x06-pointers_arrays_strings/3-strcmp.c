#include "main.h"
#include <string.h>

/**
 * _strcmp - Function to compare 2 strings.
 * @s1: first comparative string.
 * @s2: Second comparative string.
 *
 * Return:	0 if string is the same.
 *		Difference between s1 and s2 if string is different.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, len1 = strlen(s1), len2 = strlen(s2);

	if (len1 != len2)
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		for (; i < len1 - 1; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else
			{
				continue;
			}
		}
	}
	return (0);
}
