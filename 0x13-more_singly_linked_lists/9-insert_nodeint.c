#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to head
 * @idx: index of the list
 * @n: integer
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *b;
	listint_t *c;

	c = *head;

	if (idx != 0)
	{
		for (a = 0; a < idx - 1 && c != NULL; a++)
		{
			c = c->next;
		}
	}

	if (c == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);

	b->n = n;

	if (idx == 0)
	{
		b->next = *head;
		*head = b;
	}
	else
	{
		b->next = c->next;
		c->next = b;
	}

	return (b);
}
