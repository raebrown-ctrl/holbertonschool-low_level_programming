#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @s1: input string
* @s2: input substring
* Return: pointer to the start of the located substring
* or 'NULL' if substring is not found
*/
char *_strstr(char *s1, char *s2)
{
	int i, j;

	for (i = 0; *(s1 + i);)
	{
		for (j = 0; *(s2 + j) == *(s1 + i + j);)
		{
			if (*(s2 + j) == *(s1 + i + j))
				j++;
			else
				break;
		}
		if (*(s2 + j))
			i++;
		else
			return (s1 + i);
	}
	return (NULL);
}

