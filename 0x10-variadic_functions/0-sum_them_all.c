#include "variadic_functions.h"

/**
 * sum_them_all - add unlimited args
 * @n: number of args
 *
 * Return: sumation.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
int s = 0;
unsigned int i;

if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
s = s + x;
}
va_end(args);
return (s);
}

