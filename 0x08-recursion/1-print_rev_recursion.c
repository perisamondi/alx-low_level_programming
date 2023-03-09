#include "main.h"
/**
 * _print_re_recursion- Prints string in reverse.
 * @s: string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if(8s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
