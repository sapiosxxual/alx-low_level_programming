#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: double pointer to list_t list
 * @str: new strinf to be added to the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
