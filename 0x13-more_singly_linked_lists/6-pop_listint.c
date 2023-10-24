#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer to head of a list
 * Return: a
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *b;
	listint_t *c;

	if (*head == NULL)
		return (0);

	c = *head;

	a = c->n;

	b = c->next;

	free(c);

	*head = b;

	return (a);
}
