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

if (b == NULL)
return (0);

for (unsigned int i = 0; i < len; i++)
{
if (b[i] == '1' || b[i] == '0')
{
result = result + (b[i] - '0') * power(2, len - i - 1);
}
else
{
return (0);
}
}

return (result);
}

/**
 * power - calculate the power
 * @base : base.
 * @exponent : exponent.
 *
 * Return: result of convert.
 */
double power(double base, int exponent)
{
double result = 1.0;

if (exponent < 0)
{
printf("Negative exponents are not supported in this example.\n");
return (0.0);
}

for (int i = 0; i < exponent; ++i)
{
result *= base;
}

return (result);
}
