#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 * identical, otherwise returns 0
 *
 * @s1: First string to compare
 * @s2: Second string to compare; may contain the wildcard character '*'
 *
 * Description: If s2 contains '*', this character can replace any string
 * (including an empty string). This function recursively compares s1 and s2
 * to determine if they can be considered identical.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	/*
	 * Base case: If both strings are empty, they match
	*/

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/*
	 *  If the current characters match, move to the next character
	*/

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/*
	 * If the wildcard character is found in s2, try to match the rest of s1
	 * with s2 after the '*' character, or skip the '*' character altogether
	*/

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	/*
	 * If none of the above conditions apply, the strings don't match
	*/

	return (0);
}
