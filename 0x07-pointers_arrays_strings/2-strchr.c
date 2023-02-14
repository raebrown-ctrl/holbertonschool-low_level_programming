#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string
* @s: string to search
* @c: character to be searched
* Return: pointer to the first occurrence of 'c' in the string
* or 'NULL' if character not found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) >= '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}

