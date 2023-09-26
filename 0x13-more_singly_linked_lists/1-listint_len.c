#include "lists.h"

/**
 * print_listint - a function that prints number of the lists.
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t node_no = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{

		if (h->n != '\0')

		node_no++;

		h = h->next;
	}

	return (node_no);
}
