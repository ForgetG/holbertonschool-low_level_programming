#include "lists.h"

/**
 * *insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Given dlistint_t list.
 * @idx: Given index.
 * @n: Data (integer) for new node.
 * Return: address of the new_node, or NULL if it failed.
 */

dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t	*new_node;
	dlistint_t	*current_node = *h;
	unsigned int	index = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		while (current_node != NULL && index < idx)
		{
			if (index == idx - 1)
			{
				new_node->next = current_node->next;
				new_node->prev = current_node;
				if (current_node->next != NULL)
					current_node->next->prev = new_node;
				current_node->next = new_node;
				return (new_node);
			}
			current_node = current_node->next;
			index++;
		}
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
