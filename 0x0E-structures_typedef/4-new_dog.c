#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}

/**
 * _strcpy - copies pointed string
 * @dest: pointer to dest string
 * @src: pointer to src string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}

/**
 * *new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	new_dog->name = malloc(sizeof(char) * len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	len_owner = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
