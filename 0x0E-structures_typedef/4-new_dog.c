#include "dog.h"

/**
 * _strdup - returns a pointer to space in memory containing copy of string
 * @s: pointer
 *
 * Return: Pointer
 */
char *_strdup(char *s)
{
	char *a;
	unsigned int x;
	unsigned int y;

	if (s == NULL)
		return (NULL);

	while (s[x] != '\0')
		x += 1;
	x++;

	a = malloc(x * sizeof(*a));
	if (a == NULL)
		return (NULL);

	while (y < x)
	{
		a[y] = s[y];
		y++;
	}
	return (a);
}

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: instance of struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);

	newdog->name = _strdup(name);
	(newdog->name = NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = _strdup(owner);
	(newdog->owner = NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->age = age;

	return (newdog);
}
