#include "lists.h"

/**
 * add_nodeint - add a node at the beginnig
 * @head: points to a pointer which points to a list
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	liistint_t *location;

	if (!head)
		return (NULL);
	location = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = location;
	*head = new;

	return (*head);
}
