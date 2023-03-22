#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints out the result of simple operations
 * @argc - number of arguments in the program
 * @argv - n arrya of pointers to the arguments
 * Return: Always 0
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int num1;
	int num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = rgv[2];
	num2 = toi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0)) || ((*op == '%' && num2 == 0))	
	{
		
			printf("Error\n");
			exit (100);
	}
	print f ("%d\n", get_op_func(op)(num,num2));
	return (0);
}		
