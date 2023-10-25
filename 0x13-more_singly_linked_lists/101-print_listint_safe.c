#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head, *loop_node = NULL;
size_t node_count = 0;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
node_count++;

if (current >= current->next)
{
loop_node = current->next;
break;
}

current = current->next;
}

if (loop_node != NULL)
{
printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
exit(98);
}

return (node_count);
}
