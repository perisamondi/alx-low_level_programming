#include "lists.h"

/**
 * listint_len - calculates the number of elements in a linked list
 * @h: pointer to linked list  listint_t 
 * 
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h -> next;
	}
	return (num);
}
