#include <stdio.h>

/**
 * main -Entry point
 * Return: Aways 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');
	return (0);
}
