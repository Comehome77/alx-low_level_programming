#include "lists.h"

/**
 *free_list - frees a file
 *@head: pointer to head
 */

void free_list(list_t *head)
{
	list_t *a;

	a = head;
	while (a != NULL)
	{
		free(a->str);
		free(a);
		a = a->next;
	}
}
