#include "lists.h"
/**
 * add_node - add a new node
 * @head: header pointer
 * @str: string pointer
 * Return: head address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int b;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}
	a->len = b;
	a->str = strdup(str);
	a->next = *head;
	*head = a;

	return (*head);
}
