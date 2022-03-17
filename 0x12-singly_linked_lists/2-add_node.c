#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds the legnth of a string
 * @str: string to be searched
 *
 * return: length  of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * add_node - add a node to the beginning of a linked list
 * @head: double pointer to the head of a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node .
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);


}
