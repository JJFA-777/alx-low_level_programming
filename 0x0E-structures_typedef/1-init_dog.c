#include "dog.h"

/**
 * init_dog - Function that initializes the dog struct.
 * @d: struct to initialize.
 * @name: pointer to char string for dog name.
 * @age: float of age value.
 * @owner: pointer to char string for dog's owner.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
