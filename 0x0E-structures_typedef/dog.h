#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for a dog's info.
 * @name: pointer to Dog's name.
 * @age: floating point value for age.
 * @owner: pointer to char string for dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*Prototypes*/

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
