#include "main.h"
/**
* _isalpha - Checks for alphabetic char
* Return: 1, or 0
* @c: character
* _isalpha - chcks for alphabetic char
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
