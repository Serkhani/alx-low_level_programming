#include <stdlib.h>
#include "main.h"

/**
 * _strLen - returns length of the string
 * @c: ptr to the string
 * Return: int describing the length of the string
 */
int _strLen(char *c)
{
	int len = 0;

	while (*c++ != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - copy string to memory location
 * @str: string to be copied
 * @len: length of the string
 * @dest: location to be copied to
 */
void _strcpy(char *str, int len, char *dest)
{
	int i;

	for (i = 0; i < len; i++)
	{
		dest[i] = str[i];
	}

	dest[i] = '\0';
}

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Pointer or NULL depending on success of function
 */



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nameLen = 0;
	int ownerLen = 0;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	nameLen = _strLen(name);
	n_dog->name = malloc(sizeof(char) * nameLen + 1);

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	_strcpy(name, nameLen, n_dog->name);

	ownerLen = _strLen(owner);
	n_dog->owner = malloc(sizeof(char) * ownerLen + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	_strcpy(owner, ownerLen, n_dog->owner);
	n_dog->age = age;
	return (n_dog);
}
