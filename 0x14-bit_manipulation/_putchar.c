#include "main.h"
/**
 * _putchar - oputchar function.
 * @c: The character to be printed.
 *
 * Return: The character written as an unsigned char cast to an int.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
