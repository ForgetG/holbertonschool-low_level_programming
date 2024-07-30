#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * of a dlistint_t linked list.
 * @head: given dlistint_t linked list.
 * @index: given index.
 * Return: success(1), fail(-1).
 */

int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t	*current_node = *head;
	dlistint_t	*next_node;
	unsigned int	i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		if (next_node != NULL)
			next_node->prev = NULL;
		return (1);
	}
	while (current_node != NULL && i < index)
	{
		if (i == index - 1)
		{
			next_node = current_node->next;
			if (next_node != NULL)
			{
				current_node->next = next_node->next;
				if (next_node->next != NULL)
					next_node->next->prev = current_node;
				free(next_node);
				return (1);
			}
		}
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
