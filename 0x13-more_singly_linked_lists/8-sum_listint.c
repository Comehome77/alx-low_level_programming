#include "lists.h"

/**
 * sum_listint - prints sum of data in linked file
 * @head: pointer to head
 * Return: ans
 */

int sum_listint(listint_t *head)
{
	int ans = 0;

	while (head != NULL)
	{
		ans += head->n;
		head = head->next;
	}
	return (ans);
}
