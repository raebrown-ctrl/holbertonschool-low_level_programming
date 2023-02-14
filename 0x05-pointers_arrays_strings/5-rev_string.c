#include "main.h"

/**
* rev_string - reverse a string
* @s: string to print in reverse
* Return: reversed string
*/
void rev_string(char *s)
{
	int i = 0, j = 0;
	char bu[800];

	while (*(s + i))
	{
		bu[i] = s[i];
		i++;
	}
	while (i - 1 >= 0)
	{
		*(s + j) = *(bu + i - 1);
		i--;
		j++;
	}
}

