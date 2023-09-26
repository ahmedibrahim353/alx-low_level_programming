#include "lists.h"

/**
 * listint_len - function that print the
 * the elements of the node.
 *
 * @h: pointer to the first node.
 *
 * Return: elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{

		h = h->next;

		elements++;
	}

	return (elements);

}


