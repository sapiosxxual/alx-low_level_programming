#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
