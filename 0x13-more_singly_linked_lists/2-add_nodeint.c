#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: first node of the linked list list_t
 * @n: data to be inserted in new node
 * Return: pointer to new node / NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof (listint_t));
	if (!new)
		return (NULL);
	else
		new -> n = n;
	new -> next = *head;
	*head = new;
	return (new);
}
