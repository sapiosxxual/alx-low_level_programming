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
	listint_t *current;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		size++;
		current = *h;
		*h = (*h)->next;

		if (current->next == NULL || current->next >= current)
		{
			free(current);
			break;
		}
		temp = current->next;
		current->next = NULL;
		free(current);
		current = temp;
	}
	*h = NULL;
	return (size);
}
