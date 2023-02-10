#include "main.h"

/**
 * _puts - prints string to std out
 * @str: string input
 * Return: void
 */
void _puts(char *str)
{

	while (*str)

		_putchar(*str++);

	_putchar('\n');
}
