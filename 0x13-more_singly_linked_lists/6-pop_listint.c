#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to head of the linked list
 * Return: returns the head node’s data (n). of the lonked list if linked list
 * is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		data = temp->n;
		free(temp);
	}
	return (data);
}
