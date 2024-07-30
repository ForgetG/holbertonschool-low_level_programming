#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: given dlistint_t linked list.
 * @index: given index.
 * Return: adrress of the nth node, or NULL if the node does not exist.
 */

dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int	i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
