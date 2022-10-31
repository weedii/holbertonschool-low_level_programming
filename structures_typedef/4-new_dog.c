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
	int i, j;

	dog = malloc(sizeof(dog_t));
	name_copy = malloc(sizeof(strlen(name)));
	owner_copy = malloc(sizeof(strlen(owner)));

	if (dog == NULL)
		return (NULL);

	if (name_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];

	if (owner_copy == NULL)
	{
		free(owner_copy);
		return (NULL);
	}
	for (j = 0; owner_copy[j] != '\0'; j++)
		owner_copy[j] = owner[j];

	dog->age = age;

	return (dog);
}
