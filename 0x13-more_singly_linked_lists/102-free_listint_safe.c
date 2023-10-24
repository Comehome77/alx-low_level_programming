#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: head of list
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *c;
	size_t a = 0;
	int b;

	c = *h;

	while (c)
	{
		b = c - c->next;
		if (b > 0)
		{
			tmp = c->next;
			free(c);
			c = tmp;
			a++;
		} else
		{
			free(c);
			*h = NULL;
			a++;
			break;
		}

	}

	*h = NULL;

	return (a);
}
