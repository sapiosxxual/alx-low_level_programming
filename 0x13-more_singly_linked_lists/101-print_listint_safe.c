#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to head of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow_ptr;
	const listint_t *fast_ptr;

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		count++;
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			exit(98);
		}
	}
	return (count);
}
