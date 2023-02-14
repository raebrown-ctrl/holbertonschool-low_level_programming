#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to append
 * @src: the string that 'n' characters are going to append
 * @n: the number of characters to be appended
 * Return: src and dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}

