#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int a = 0;
	int b = 0;
	int c;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = malloc(a * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (c = 0; c <= a; c++)
		newdog->name[c] = name[c];
	newdog->age = age;
	newdog->owner = malloc(b * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		newdog->owner[c] = owner[c];

	return (newdog);
}
