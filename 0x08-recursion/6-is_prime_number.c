#include "main.h"

/**
* prime - auxiliary
* @x: the number
* @y: the auxiliary
* Return: 1 prime
**/
int prime(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (prime(x, y + 1));
}
/**
* is_prime_number - is prime
* @n: int to be evaluated
* Return: 1 for prime otherise 0
**/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime(n, 2));
}

