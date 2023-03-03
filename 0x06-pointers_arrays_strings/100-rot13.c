#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be rotaited
 *Return: string
*/

char *rot13(char *str)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int counter = 0, i;

	while (*(str + counter) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + counter) == a[i])
			{
				*(str + counter) = r[i];
				break;
			}
		}
		counter++;
	}
	return (str);
}
