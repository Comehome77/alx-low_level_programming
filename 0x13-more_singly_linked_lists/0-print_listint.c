#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: head
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
