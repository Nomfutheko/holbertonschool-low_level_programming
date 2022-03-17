# include "lists.h"

/**
 * list_len - returns the number of node in a list
 * @n: given list
 *
 * Return : legnth of the list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != 0)
	{
		legnth++;
		h = h->next;
	}
	return (legnth);
}
