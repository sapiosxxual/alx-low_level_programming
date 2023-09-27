#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete d node at index of a listint_t linked list.
 * @head: pointer to pointer to the head of a linked list
 * @index: the index of the node to ne deleted
 * Return: On Success (1), otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (i < index || current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
