#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - count the numbers of unique node in a looped list_int
 * linked list
 * @head: a pointer to the head of the listint_t to check
 * Return: if the list is not looped - 0
 * Otherwise the number of unique node in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function that print a listint_t linked list
 * @head: pointer to head of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, count = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (count = 0; count < nodes; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
