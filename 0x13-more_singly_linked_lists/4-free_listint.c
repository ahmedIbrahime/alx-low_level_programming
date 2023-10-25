#include "lists.h"

/**
 * free_listint - frees all .
 * @head: head of the list
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
