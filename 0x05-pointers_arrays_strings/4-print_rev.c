#include "main.h"

/**
* print_rev - prints string in reverse
* @s: pointer to the printed in reverse string
* Return: void
*/
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
	i++;
		i = i - 1;
			while (i >= 0)
			{
				_putchar(s[i]);
			i--;
			}
	_putchar('\n');
}

