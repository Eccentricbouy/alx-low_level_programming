#include "main.h"
/**
 * _strspn - gets the of a prefix substring
 * Return: the number of bytes in the initial segment of @s which consist only of bytes from accept
 * @s: segment to return bytes from
 * @accept: the bytes to include
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] i= 32)
		{
			for (j = 0; accept[j] i= '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
