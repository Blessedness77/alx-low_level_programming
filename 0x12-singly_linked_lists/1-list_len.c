#include "lists.h"

/**
 * list_len - Evaluates number of elements in a linked list
 * @h: Linked list
 *
 * Return: Number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t lent = 0;

	while (h)
	{
		lent++;
		h = h->next;
	}

	return (lent);
}
