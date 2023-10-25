#include "lists.h"

/**
 * listint_len - numbers of node count.
 * @h: the head.
 *
 * Return: the num.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
