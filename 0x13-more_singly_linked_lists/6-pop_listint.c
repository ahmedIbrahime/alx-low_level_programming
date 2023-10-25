#include "lists.h"

/**
 *pop_listint - deletes.
 *@head: head of the list
 *
 *Return: deleated node .
 */

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;

	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	free(popped);

	*head = (*head)->next;
	return (content);
}
