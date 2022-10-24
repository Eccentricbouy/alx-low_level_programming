#include <stdlib.h>
#include "main.h"
/**
 * _strchr - locates a char in a string
 * Return: a pointer to the first occurance of the character
 * @s: the strung to check
 * @c: the cahracter we're looking for
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
	
