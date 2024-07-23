#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Function that creates new dog struct.
 * @name: char string with dog name.
 * @age: floating point for age.
 * @owner: char string with owner name.
 *
 * Return: pointer to new struct or NULL if fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	int i, lenn = 0, leno = 0;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	while (name[lenn])
		lenn++;
	n = malloc(sizeof(char) * lenn + 1);
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; i < lenn; i++)
		n[i] = name[i];
	n[i] = '\0';

	while (owner[leno])
		leno++;
	o = malloc(sizeof(char) * leno + 1);
	if (o == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}

	for (i = 0; i < leno; i++)
		o[i] = owner[i];
	o[i] = '\0';
	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
