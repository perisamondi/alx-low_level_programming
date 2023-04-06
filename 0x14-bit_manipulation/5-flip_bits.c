#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, e = 0;
	unsigned long int f;
	unsigned long int g = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		f = g >> i;
		if (f & 1)
			e++;
	}

	return (e);
}
