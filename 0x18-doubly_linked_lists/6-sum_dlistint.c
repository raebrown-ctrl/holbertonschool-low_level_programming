#include "lists.h"
/**
* sum_dlistint - that returns the sum of all the data (n) of a list
* @head: variable pointer
* Return: the sum of all the data (n)
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *i;
	int sum = 0;

	for (i = head; i != NULL; i = i->next)
	{
		sum = sum + i->n;
	}
	return (sum);
}

