#include "main.h"

/**
 * get_bit - the value of a bit at a given index.
 * @n: num given.
 * @index: The index.
 *
 * Return: The value of the bit, or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

return ((n >> index) & 1);
}
