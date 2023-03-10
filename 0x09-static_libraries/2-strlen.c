#include "main.h"

/**
* _strlen - finds the length of a given string
* @s: points to the first character in the string
* Return: returns the length of the string
*/

int _strlen(char *s)
{
	int len;

	for (len = 0 ; s[len];)
		len++;
	return (len);
}
