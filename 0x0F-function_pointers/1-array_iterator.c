#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator  - prints an integer
 * @array: the array
 * @size: size of the array
 * @action: the function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
{
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
}
