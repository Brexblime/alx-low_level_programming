#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
	return (NULL);
	}
	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);

	return (dog);
}
