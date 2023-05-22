#include "main.h"

/**
 * _isalpha - hecks for alphabetic character
 * @c: the character to be checked
 * Return: 1 (if c is letter, lower or uppercase) ; 0 (anything else)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		else if (c >= 65 && c <= 90)
		{
			return (1);
		}
	return (0);
}
