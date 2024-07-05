#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates 2 strings.
 * @dest: destination string.
 * @src: source string.
 * @n: size of bytes of data to concatenate.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
