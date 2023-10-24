#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer to head
 * @index: node to be deleted
 * Return: -1, 0 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a = *head;
	listint_t *b;
	unsigned int c =  0;

	if (head  == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = a->next;
		free(a);
		return (1);
	}
	while (c != (index - 1))
	{
		a = a->next;
		c++;
		if (a == NULL)
			return (-1);
	}
	b = a->next;
	a->next = b->next;
	free(b);
	return (1);
}
