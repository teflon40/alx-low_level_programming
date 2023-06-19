#include "dog.h"
#include <stdlib.h>

int _strlen(const char *);
char *_strcpy(char *, const char *);
/**
 * new_dog - creates a new dog
 * @name: a pointer to a string
 * @age: a float parameter
 * @owner: a pointer to a string
 * Return: a struct type
 * or NULL if the my_dog fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog_ptr = (dog_t *) malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);
	dog_ptr->name = (char *) malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}
	dog_ptr->owner = (char *) malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}
	_strcpy(dog_ptr->name, name);
	_strcpy(dog_ptr->owner, owner);
	dog_ptr->age = age;
	return (dog_ptr);
}

/**
 * _strlen - calculates the length of a string
 * @s: a pointer to the string
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;
	return (len);
}

/**
 * _strcpy - copies one string into another
 * @dest: a pointer to the string to receive the copy
 * @src: a pointer to the string to be copied
 * Return: a pointer to the resulting string
 */
char *_strcpy(char *dest, const char *src)
{
	int len = 0;

	while (*src != '\0')
		dest[len++] = *src++;
	dest[len] = '\0';
	return (dest);
}
