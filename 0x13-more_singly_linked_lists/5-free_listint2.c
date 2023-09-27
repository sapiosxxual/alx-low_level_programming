#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list and set the head to NUL
 * @head: pointer to pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
