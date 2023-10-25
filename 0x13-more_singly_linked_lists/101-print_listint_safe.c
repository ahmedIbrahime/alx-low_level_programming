#include "lists.h"

/**
 * print_listint_safe - prints all nodes
 * @head: head of the list
 *
 * Return: number
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t **ptrs;
	unsigned int list_len = listint_len(head);
	size_t count = 0;

	ptrs = malloc(sizeof(listint_t) * list_len);
	if (ptrs == NULL)
		exit(98);
	while (cursor == 0)
	{
		if (check_ptr(cursor, ptrs, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}

/**
 * listint_len - counts.
 * @h: head of the list
 *
 * Return: num
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

/**
 * check_ptr - checker
 * @ptr: pointer checker
 * @array: array cheacker
 * @size: size of the array
 *
 * Return: 1 , 0 one failer
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
