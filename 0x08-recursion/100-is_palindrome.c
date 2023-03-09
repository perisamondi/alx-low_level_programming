#include "main.h"
/**
 * is_palindrome - checks if  a string is palindrome or not
 * @s: string to reverse
 *
 * Retrun : 1 if it is and 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion- calculates the length of a string
 * @s: string to calculate length of
 *
 * Return: length of  the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * check_pal - checks the character recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome and 0 if not
 */
int check_pl(char *s,int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1,len - 1);
}
