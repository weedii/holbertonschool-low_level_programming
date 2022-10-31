#include "dog.h"

/**
 * str_malloc - allocate string in memory
 * @str:   pointer to a string
 * Return: pointer to the allocated string
 */

char *str_malloc(char *str)
{
	char *ch;
	int i;

	if (str == NULL)
		return (NULL);

	ch = malloc(sizeof(char) * (strlen(str)));

	if (ch == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ch[i] = str[i];

	ch[i] = '\0';

	return (ch);
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

	dog->name = str_malloc(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = str_malloc(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
