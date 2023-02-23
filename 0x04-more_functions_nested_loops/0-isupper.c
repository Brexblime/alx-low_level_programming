#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Retutn: 1 (if c is uppercase) , 0 (if anything else)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
