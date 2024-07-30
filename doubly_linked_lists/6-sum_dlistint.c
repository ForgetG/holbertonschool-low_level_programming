#include "lists.h"

/**
 * sum_dlistint - calculates and returns the sum of all the data
 * of a dlistint_t list.
 * @head: given dlistint_t list.
 * Return: sum of all data (sum), or 0 if list is empty.
 */

int	sum_dlistint(dlistint_t *head)
{
	unsigned int	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
