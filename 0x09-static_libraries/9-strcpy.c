#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Buffer pointed to where the string will be copied to
 * @src:  String pointed to that will be copied to dest
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = *(src + i);

	return (dest);
}
