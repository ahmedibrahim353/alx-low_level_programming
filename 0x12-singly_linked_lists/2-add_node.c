#include "lists.h"

/**
 * add_node - function that add node at the beggining.
 * @head: an input from type list_t.
 * @str: pointer to char.
 *
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);


	(ptr)->str = strdup(str);
	(ptr)->len = strlen(str);
	(ptr)->next = NULL;
	(ptr)->next = *head;
	*head = ptr;

	return (ptr);
}
