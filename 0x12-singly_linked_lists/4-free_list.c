#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list.
 * @head: list_t ti be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
