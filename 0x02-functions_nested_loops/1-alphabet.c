#include  "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void);

int main(void)
{
	char we = 'a';
	char ta = 'z';

	while (ta <= 'z')
	{
		putchar(we);
		we++;
	}
	putchar('\n');
	return (0);
}

