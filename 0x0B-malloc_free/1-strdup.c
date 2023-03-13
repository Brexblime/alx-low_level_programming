#include "main.h"

/**
 * _strdup - returns pointer to new string which is duplicate of the string str
 * @str: the string to be duplicated from
 * Return:  pointer to the duplicated string or NULL if insufficient memory
*/

char *_strdup(char *str)
{
	size_t len;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	new_str = malloc(len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, str, len + 1);
		return (new_str);
}
