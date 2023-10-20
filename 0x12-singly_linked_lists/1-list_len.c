#include "lists.h"

/**
 * list_len - returns number of elements in file
 * @h: pointer to file
 * Return: node number
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
