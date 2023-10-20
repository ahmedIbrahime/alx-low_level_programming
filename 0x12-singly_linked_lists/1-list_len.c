#include "lists.h"

/**
 * list_len - finds the number of elements in linked list
 *@h: pointer.
 *
 *Return: the number of elem.
*/

size_t list_len(const list_t *h)
{
size_t elements = 0;

while (h)
{
elements++;
h = h->next;
}

return (elements);
}
