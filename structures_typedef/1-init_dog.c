#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a structure
 * @name:  pointer to the name in the structure
 * @age:   pointer to the age in the structure
 * @owner: pointer to the owner in the structure
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
