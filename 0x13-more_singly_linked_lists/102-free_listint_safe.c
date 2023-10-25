#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list with a loop
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp, *checker;
size_t size = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
checker = NULL;

while (current != NULL)
{
size++;
temp = current;

if (temp == checker)
{
*h = NULL;
return (size);
}

checker = current;
current = current->next;

free(temp);
}

*h = NULL;
return (size);
}
