#include  "main.h"

/**
 * _puts_recursion- prints out a string
 * @s:input
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	 char s = s*factorial(s-1);
	 char *s = printf(fact(s));
	 
	_putchar(*s);
	_puts_recursion(s+1);
	_putchar('\n');
	return (0);
}
