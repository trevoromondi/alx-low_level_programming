#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of a listint_t list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nmbr_nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nmbr_nodes++;
	}
	return (nmbr_nodes);
}
