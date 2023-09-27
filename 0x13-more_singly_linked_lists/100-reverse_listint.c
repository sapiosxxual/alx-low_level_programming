#include "lists.h"
/**
 * reverse_listint - delete the node at index index of a listint_t linked list.
 * @head: pointer to pointer to head of linked list
 * Return: pointer to the first node of the reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next_node = NULL;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}
	*head = prev;
	return (*head);
}
