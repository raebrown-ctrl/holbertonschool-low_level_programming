#include "holberton.h"

/**
* leet - encodes a character
* @n: character to change
* Return: character changed
*/
char *leet(char *n)
{
	int i = 0, j;
	char aux1[] = "aeotlAEOTL";
	char aux2[] = "4307143071";

	while (*(n + i))
	{
		for (j = 0; j < (int)(sizeof(aux1) / sizeof(char)); j++)
		{
			if (*(n + i) == aux1[j])
				*(n + i) = aux2[j];
		}

		i++;
	}
	return (n);
}

