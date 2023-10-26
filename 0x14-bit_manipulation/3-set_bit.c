#include "main.h"

/**
 * set_bit - Set the value to 1.
 * @n: nnum poniter.
 * @index: The index given.
 *
 * Return: 1 ,-1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n | (1UL << index);

return (1);   
}
