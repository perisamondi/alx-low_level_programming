#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, b = 0;
	unsigned long int c;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
