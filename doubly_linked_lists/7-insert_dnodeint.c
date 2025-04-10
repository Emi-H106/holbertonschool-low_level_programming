#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to the head of the list
 * @idx: the index of the list where the new node should be added.
 *       Index starts at 0
 * @n: the data of dlistint_t list
 * Return: the address of the new node, or NULL if it failed
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

		while (temp != NULL && count < idx - 1)
		{
			temp = temp->next;
			count++;
		}
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = temp->next;
		new_node->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;

		return (new_node);
}
