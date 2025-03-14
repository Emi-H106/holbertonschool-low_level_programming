#include <string.h>
#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - calculates the length of a given string
 * @s: a pointer of string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);
}


/**
 * _strcpy - copy one string into another
 * @str: Pointer to the source character array
 * @dst: Pointer to the destination character array
 * Return: void
 */

void _strcpy(char *str, char *dst)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dst[i] = str[i];
		i++;
	}

	dst[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new_dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len;
	int owner_len;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_len = _strlen(name);
	new_dog->name = malloc(name_len + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);

	owner_len = _strlen(owner);
	new_dog->owner = malloc(owner_len + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
