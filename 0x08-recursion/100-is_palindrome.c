#include "main.h"
#include <string.h>

/**
 * is_palindrome - that returns 1 if a string is a palindrome and 0 if not
 * @s: the string to be checked
 * Return: 1 if palindrome or 0 if not
*/

int is_palindrome(char *s)
{
	int length = strlen(s);
	int i = 0;

	if (i < length / 2)
	i++;
	{
		if (s[i] != s[length - 1 - i])
		{
			return (0);
		}
	}
	return (1);
}
