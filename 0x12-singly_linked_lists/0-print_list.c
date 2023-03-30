#include <stdio.h>
#include "lists.h"

/**
 * print_list - prnts all the elements of  list
 * @h :is pointer to list_t to be printed
 * @n : number of nodes
 * return : number of nodes
 */
size_t print_list(const list_t *h)
{
 	size_t s = 0;

 	while (h)
 	{
		if (!h->str)
			printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	s++;
 	}

	return (s);
}
