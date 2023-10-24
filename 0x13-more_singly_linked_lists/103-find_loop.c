#include "lists.h"

/**
 * find_listint_loop - finds a loop
 * @head: pointer to head
 * Return: address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a;
	listint_t *b;

	a = head;
	b = head;
	while (head && a && a->next)
	{
		head = head->next;
		a = a->next->next;

		if (head == a)
		{
			head = b;
			b =  a;
			while (1)
			{
				a = b;
				while (a->next != head && a->next != b)
				{
					a = a->next;
				}
				if (a->next == head)
					break;

				head = head->next;
			}
			return (a->next);
		}
	}

	return (NULL);
}
