#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int n;

	c = 'a';
	n = 0;

	while
		(n < 10) {
			putchar(n + '0');
			n++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
