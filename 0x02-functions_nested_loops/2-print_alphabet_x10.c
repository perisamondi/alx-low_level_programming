#include "main.h"
/**
 * print_alphabet_x10- prints 10 times the alphabet in lowercase.
 * followed by a new line
 */
void print_alphabet_10(void)
{
	char a;
	int i;

	i = 0;
	a = 'a';

	while (i < 10)
	{
			while (a <= 'z')
			{
				_putchar(a);
				a++;
			}
		_putchar('\n');
		i++;
	}
}           
