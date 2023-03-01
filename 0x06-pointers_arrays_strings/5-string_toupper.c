#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to string
 *
 * Return: Pointer to modified string
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		*p -= 32;
		p++;
	}
	return str;
}
