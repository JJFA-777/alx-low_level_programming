#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - a function that reverses a string.
 * @s: string that is passed into the program.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s), left = 0, right = len - 1;
	char temp;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}
