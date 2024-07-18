#include "main.h"
#include <stdlib.h>

/**
 * strtow - that splits a string into words.
 * @str: string to be assesed.
 *
 * Return: pointer to string ot NULL on failure.
 */

int word_count(char *str)
{
	int isword, count = 0;

	while (*str)
	{
		if (*str == ' ')
			isword = 0;
		else if (!isword)
		{
			isword = 1;
			count++;
		}
		str++;
	}
	return (count);
}


char **strtow(char *str)
{
	int count = 0, i = 0, j = 0, k = 0, len = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = word_count(str);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		len = 0;
		while (str[i + len] != '\0' && str[i + len] != ' ')
			len++;
		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			while (j <= 0)
				free(words[j--]);
			free(words);
			return (NULL);
		}
		k = 0;
		while (k < len)
		{
			words[j][k] = str[i + k];
			k++;
		}
		words[j][k] = '\0';
		i += len;
		j++;
	}
	words[j] = NULL;
	return (words);
}
