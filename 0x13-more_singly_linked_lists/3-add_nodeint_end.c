#include "lists.h"

/**
 * add_nodeint_end - adds new  node  to the end of the linked list
 * @head: pointer to the first element of the list
 * @n : data to insert in new element
 * Return: pointer to new node /NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	else
		new -> n = n;
	new -> next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp -> next)
		temp = temp -> next = new;
	return (new);
}
