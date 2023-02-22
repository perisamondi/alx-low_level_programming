#include "main.h"

/**
 * print _alphabet - prints alphabet in lowercase
 */

void print_alphabet(void)
{
	char ta;
	
	for (ta = 'a';ta <= 'z'; ta++)
	{
		_putchar(ta);
	}
	_putchar('\n');
}
