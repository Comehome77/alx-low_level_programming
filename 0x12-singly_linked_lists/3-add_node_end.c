#include "lists.h"

/**
 * add_node_end - adds  new node at the end
 * @head: pointer of head
 * @str: pointer of string
 * Return: address of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;
	size_t c;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	a->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	a->len = c;
	a->next = NULL;
	b = *head;

	if (b == NULL)
	{
		*head = a;
	}
	else
	{
		while (b->next != NULL)
			b = b->next;
		b->next = a;
	}

	return (*head);
}
