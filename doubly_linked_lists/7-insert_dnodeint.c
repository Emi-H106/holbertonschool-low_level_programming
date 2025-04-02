#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to the head of the list
 * @idx: the index of the list where the new node should be added.
 *       Index starts at 0
 * @n: the data of dlistint_t list
 * Return: the address of the new node, or NULL if it failed
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node; 
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (index == 0)
	{
		new_node->next = *head;
		new_node->prev = NULL;
	
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	
		*head = *new_node;
		return (new_node);
	
		while (temp != NULL && count < idx -1)
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
		new_node_prev = new_node;
	
		if (temp != NULL)
		{
			temp->next->prev = temp;
		}

		temp->next = new_node;

		return (new node);
}

