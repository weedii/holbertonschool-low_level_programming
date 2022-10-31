#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name:  pointer to the name in the structure
 * @age:   pointer to the age in the structure
 * @owner: pointer to the owner in the structure
 * Return: pointer to a structure dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	dog = malloc(sizeof(dog_t));
	name_copy = malloc(sizeof(name));
	owner_copy = malloc(sizeof(owner));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
	free(dog);
	free(name_copy);
	free(owner_copy);
}
