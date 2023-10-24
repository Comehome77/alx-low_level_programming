#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to head of a list
 * @n: integer
 * Return: a
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	b = *head;
	while (b->next)
		b = b->next;
	b->next = a;
	return (a);
}
