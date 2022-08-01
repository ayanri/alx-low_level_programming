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
	int new_name;
	int new_owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	new_name = _strlen(name);
	newdog->name = malloc(sizeof(char) * new_name + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcpy(newdog->name, name);
	new_owner = _strlen(owner);
	newdog->owner = malloc(sizeof(char) * new_owner + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->owner = _strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}

/**
 * _strlen - determines the length of a string
 * @s: pointer
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0', a++)
		;
	return (a);
}

/**
 * *_strcpy - copies a pointer to a string
 * description: returns value of dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
