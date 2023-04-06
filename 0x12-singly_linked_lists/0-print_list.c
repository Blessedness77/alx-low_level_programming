#include "lists.h"

/**
 * print_list - Prints all elements in a list_t list
 * @h: list_t list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *head = h;
	char *str;
	size_t ln = 0, glen;

	if (!head)
		return (0);
	do {
		glen = 0;
		str = head->str;
		if (str)
			while (*str)
			{
				glen++;
				str++;
			}
		if (head->str)
			printf("[%lu] %s\n", glen, head->str);
		else
			printf("[0] (nil)\n");
		ln++;
		head = head->next;
	} while (head);

	return (ln);
}
