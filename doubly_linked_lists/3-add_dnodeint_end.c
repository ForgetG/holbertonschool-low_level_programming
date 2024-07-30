#include "lists.h"

/**
 * *add_dnodeint_end - Adds new node at the end of a dlistint_t list.
 * @head: head of given dlistint_t list.
 * @n: data (integer) to add in new node.
 * Return: adress of the new element (new_node), or NULL if it failed.
 */

dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*new_node;
	dlistint_t	*current_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
		return (NULL);
	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
	new_node->prev = current_node;
	return (new_node);
}
