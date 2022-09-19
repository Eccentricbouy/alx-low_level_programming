#include "main.h"

/**
 * print_last_digit - check the code
 * @n: memeber
 * Return: Always 0.
 */
int print_last_digit(n)
{
int i;
i = n % 10;
if (i < 0)
{
_putchar(-i + 48);
return (-i);
}
else
{
_putchar(i + 48);
return (i);
}
}
