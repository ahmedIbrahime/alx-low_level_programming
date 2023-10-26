#include "main.h"

/**
 * binary_to_uint - convert to unsign
 * @b: the char needed to be converted.
 *
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int len = strlen(b);
unsigned int result = 0;
unsigned int i;

if (b == NULL)
return (0);

for (i = 0; i < len; i++)
{
if (b[i] == '1' || b[i] == '0')
{
result = result + (b[i] - '0') * _power(2, len - i - 1);
}
else
{
return (0);
}
}

return (result);
}
