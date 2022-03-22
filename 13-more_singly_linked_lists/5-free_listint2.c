#include "lists.h"

/**
 * free_listint2 - frees the list and sets head to NULL
 * @head: double ptr to list
 * return: void
 */
void free_listing2(listint_t **head)
{
	listint_t *location;
	listint *phree;

	if (!head)
		return;
	location = *head;

	while (location)
	{
		phree = location;
		location = location->next;
		free(phree);
	}
	*head = NULL;
}
