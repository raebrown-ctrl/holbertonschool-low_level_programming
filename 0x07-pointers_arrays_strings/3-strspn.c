#include "main.h"
#include <stdio.h>

/**
* _strspn - length of prefix substring
* @s: string
* @accept: bytes to find
* Return: number of bytes to find
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}

		if (!*(accept + j))
			break;
	}
	return (i);
}

