#include "main.h"
/**
 *main - check the code
 *Return: Always 0
 *print_alphabet - print lower case alphabets
 */
#include <stdio.h>
char print_alphabet(void)
{
char ch = 'a';
for(ch = 'a'; ch <= 'z'; ch++)
{
		_putchar(ch);
	}
	_putchar('\n');
}
