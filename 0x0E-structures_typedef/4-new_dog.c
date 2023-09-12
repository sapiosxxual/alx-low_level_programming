#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - calculates length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * *_strcpy - copying a string from source to destination
 * incl terminating null byte (0) to the buffer pointed to dest
 * @dest: destination
 * @src: source
 *
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog.
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new do
 * Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogp;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	new_dogp = malloc(sizeof(dog_t));
	if (new_dogp == NULL)
		return (NULL);
	new_dogp->name = malloc(sizeof(char) * (len1 + 1));
	if (new_dogp->name == NULL)
	{
		free(new_dogp);
		return (NULL);
	}
	new_dogp->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dogp->owner == NULL)
	{
		free(new_dogp);
		free(new_dogp->name);
		return (NULL);
	}
	_strcpy(new_dogp->name, name);
	_strcpy(new_dogp->owner, owner);
	new_dogp->age = age;

	return (new_dogp);
}
