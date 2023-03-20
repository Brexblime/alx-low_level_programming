#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}