#include "dog.h"

char *_str(char *str)
{
	char *p;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';

	return (p);
}

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

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = _str(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = _str(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
