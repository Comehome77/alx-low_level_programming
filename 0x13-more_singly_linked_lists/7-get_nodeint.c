#include "lists.h"

/**
 * get_nodeint_at_index - finds node in a list
 * @head: pointer to head
 * @index: location
 * Return: head
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	for (a = 0; a < index; a++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
