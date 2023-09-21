#include "lists.h"

/**
 * list_len - function that prints the count of elements.
 * @h: an input from type list_t.
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
