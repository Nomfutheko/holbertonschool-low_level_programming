#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 * @head: double ptr to start of list
 * @n: the int t put in new node
 * return: address of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declarations */
	listint_t *new;
	listint_t *location;

	/* check for null pointer */
	if (!head)
		return (NULL);

	/*malloc space for new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/* populate new node with int, NUll */
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}

	/* insulate head & move to the end */
	location = *head;
	while (location->next)
	{
		location = location->next;
	}

	/*make last node pont to new node */
	location->next = new;

	/*return the node */
	return (new);
}
