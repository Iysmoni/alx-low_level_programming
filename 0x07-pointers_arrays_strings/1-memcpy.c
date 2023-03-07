#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: area where memory is stored
 * @src: the memory area
 * @n: bytes from memory area
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
return (dest);
}
