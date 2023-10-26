#include "main.h"

/**
 * binary_to_uint - convert to unsign
 * @b: the char needed to be converted.
 *
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
result = (result << 1) + (*b - '0');
b++;
}

return (result);
}
