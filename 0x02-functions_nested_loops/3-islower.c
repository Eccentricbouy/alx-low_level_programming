#include "main.h"
/**
* _islower - checks for lowercase character
* @c: the char in ASCII 
* Return: 1 for lowercase, 0 for other
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
