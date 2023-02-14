#include <stdio.h>
#include "main.h"

/**
* _memcpy - copies memory area
* @dest: pointer to be changed
* @src: pointer to be copied
* @n: bytes to be copied
* Return: character pointer is copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

		for (i = 0; i < n; i++)
			*(dest + i) = *(src + i);
	return (dest);
}

