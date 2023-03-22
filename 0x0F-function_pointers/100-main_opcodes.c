#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes-  prints the opcodes
 * @a : address of main  function
 * @n : number of bytes to print
 * Return: void
 */
void print_ocodes(char *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
        {
         	printf("%.2hhx\n", a[i]);

		if (i < n  - 1)
			printf(" ");
        }
	printf(" \n");
}
/**
 * main-  prints the opcodes
 * @argc: number of arguments in a program
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int n;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opocodes((char *)&main, n);
	return (0);
}
