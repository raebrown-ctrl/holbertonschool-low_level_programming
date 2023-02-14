#include "main.h"
#include <stdio.h>

/**
* _memset - fills the first 'n' bytes of memory pointed to by 's'
* @s: pointer to fill
* @b: constant byte
* @n: bytes to fill
* Return: pointer filled
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

