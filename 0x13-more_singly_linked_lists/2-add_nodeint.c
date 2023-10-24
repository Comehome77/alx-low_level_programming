#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: head
 * @n: integer
 * Return: head address
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = *head;
	*head = a;
	return (*head);
}
