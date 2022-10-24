#include "main.h"
/**
 * _memcpy - copies memory area
 * Return: pointer to dest
 * @*dest: dest
 * @*src: src
 * @n: value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
