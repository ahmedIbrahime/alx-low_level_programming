#include "lists.h"

/**
 * get_nodeint_at_index - the nth node.
 * @head: the head of the list pointer.
 * @index: index.
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				cursor = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (cursor);
}
