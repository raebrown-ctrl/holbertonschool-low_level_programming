#include "holberton.h"

/**
* cap_string - capitalizes all characters in a string
* @n: character to change
* Return: character changed
*/
char *cap_string(char *n)
{
	int i = 0, j;
	char aux[] = " \t\n,;.!?\"(){}";
	int size = sizeof(aux) / sizeof(char);

	while (n[i])
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			if (i == 0)
				n[i] = n[i] - 32;
			else
			{
				for (j = 0; j < size; j++)
				{
					if (n[i - 1] == aux[j])
						n[i] = n[i] - 32;
				}
			}
		}
		i++;
	}
	return (n);
}

