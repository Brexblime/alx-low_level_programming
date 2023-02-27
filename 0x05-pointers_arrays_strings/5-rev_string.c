#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
*/

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = 0;
	while (s[len] != '\0')
	len++;

	i = 0;
	j = len - 1;
	while (i < j)
	{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	i++;
	j--;
	}
}
