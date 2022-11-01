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
	int len_name, len_owner;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
		return (NULL);

	len_name = strlen(name);
	dog->name = malloc(sizeof(len_name + 1));
	dog->name = strcpy(dog->name, name);
	if (!dog->name)
		free(dog);

	len_owner = strlen(owner);
	dog->owner = malloc(sizeof(len_owner + 1));
	dog->owner = strcpy(dog->owner, owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
	}

	dog->age = age;

	return (dog);
}
