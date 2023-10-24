#include "lists.h"

/**
*free_listint - frees a list
*@head: pointer to head of list
*Return: none
*/

void free_listint(listint_t *head)
{
	listint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
