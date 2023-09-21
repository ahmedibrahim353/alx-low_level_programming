#include "lists.h"

/**
 * add_node_end - function that add node at the end.
 * @head: an input from type list_t.
 * @str: pointer to char.
 * Return: the number of nodes.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *current;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = ptr;
	}
	return (*head);
}
