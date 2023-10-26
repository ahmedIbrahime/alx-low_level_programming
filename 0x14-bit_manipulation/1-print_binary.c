#include "main.h"

/**
 * binary_to_uint - convert to unsign
 * @b: the char needed to be converted.
 *
 * Return: converted number.
 */

void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);

    _putchar((n & 1) + '0');
}
