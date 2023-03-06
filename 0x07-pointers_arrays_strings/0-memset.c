#include "main.h"
#include <stdio.h>
/**
 * _memset() function fills a block of memmory  with specific value
 * @s: starting address to be filled
 * @b: is the desired value
 * @n:number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
       	int i;
	i = 0;

	for (;n > 0; i++);
	{ 
		s[i]= b;
		n--;
	}
	return (s);
}
