#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		b = (*head)->b;
		(*head)->b = a;
		a = (*head);
		(*head) = b;
	}
	(*head) = a;
	return (*head);
}
