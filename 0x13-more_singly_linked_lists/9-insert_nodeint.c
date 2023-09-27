#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: the position/index to insert the node starting from 0
 * @head: pointer to pointer to the head of the linked list
 * @n: data (n) to be store in the new node
 * Return: address of the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *prev = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *head;
	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current;
	if (prev == NULL)
		*head = new_node;
	else
		prev->next = new_node;
	return (new_node);
}
