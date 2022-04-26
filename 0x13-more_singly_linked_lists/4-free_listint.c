#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
