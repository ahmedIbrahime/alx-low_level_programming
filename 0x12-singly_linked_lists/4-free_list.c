#include "lists.h"

/**
 *free_list - Free a list
 *@head: pointer to the head
 *
 */

void free_list(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
