#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: where the string is copied to
 * @src: the string that is copied
 * @n: length of characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}

