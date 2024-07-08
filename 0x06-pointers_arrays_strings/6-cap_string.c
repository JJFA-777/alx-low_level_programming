#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be capitalized.
 *
 * Return: string.
 */

char *cap_string(char *str)
{
	int i = 0;

	if (isalpha(str[i]))
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if ((isalpha(str[i]) && islower(str[i])) && !(isalpha(str[i - 1])))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
