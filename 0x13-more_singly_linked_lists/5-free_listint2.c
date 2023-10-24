#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to head of a list
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
}
