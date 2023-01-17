#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * length - calculates length of string
 * @str: the string
 * Return: pointer
 */
int _length(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * _strcpy - copies string from src to dest
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * _length(name) + 1);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	
	doggo->owner = malloc(sizeof(char) * _length(owner) + 1);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner= _strcpy(doggo->owner, owner);

	return (doggo);

}

