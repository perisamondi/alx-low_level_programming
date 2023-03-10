#include  <stdio.h>
#include "main.h"

/**
 * main - prints all arguments recieved
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		puts (argv[i]);
		printf ("\n");
	}
	return (0);
}
