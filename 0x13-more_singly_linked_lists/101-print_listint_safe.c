#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: pointer to head
 * Return: void
 */

void free_listp(listp_t **head)
{
	listp_t *a;
	listp_t *b;

	if (head != NULL)
	{
		b = *head;
		while ((a = b) != NULL)
		{
			b = b->next;
			free(a);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 * Return: node number
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	listp_t *d = NULL;
	listp_t	*new;
	listp_t *add;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = d;
		d = new;

		add = d;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&d);
				return (c);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		c++;
	}

	free_listp(&d);
	return (c);
}
