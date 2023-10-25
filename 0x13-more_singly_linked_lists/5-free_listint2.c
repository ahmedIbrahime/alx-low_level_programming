#include "lists.h"

/**
 *free_listint2 - free all nodes.
 *@head: pointer to the head of the list
 *
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
