/**
 * _power - calculate the power
 * @base : base.
 * @exponent : exponent.
 *
 * Return: result of convert.
 */
double _power(double base, int exponent)
{
int i;
double result = 1.0;

if (exponent < 0)
{
printf("Negative exponents are not supported in this example.\n");
return (0.0);
}

for (i = 0; i < exponent; ++i)
{
result *= base;
}

return (result);
}
