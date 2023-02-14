#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies string pointed to by src
* @src: string
* @dest: return value
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
return (dest);
}

