#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to pointer to the linkd list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		size++;
		current = next_node;
	}
	*h = NULL;
	return (size);
}

