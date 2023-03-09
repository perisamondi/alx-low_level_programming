#include "main.h"
/**
 * wildcmp - compare and determines if two strings are  identical
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: 1 if the strings are identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1,s2 + 1));
		}
	return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp( s1 + 1, s2 + 1));
	}
	return (0);
}
