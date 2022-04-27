#include "lists.h"

/**
 * *reverse_listint - function that reverse a linked list
 * @head: pointer to head
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward;
	listint_t *back = NULL;

	if (head == NULL)
		return (NULL);
	forward = *head;
	while (forward != NULL)
	{
		forward = forward->next;
		forward = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forward;
	}
	*head = back;
	return (*head);
}
