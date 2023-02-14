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
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}

