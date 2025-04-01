#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * createNode - create new node
 * @new_data: new data
 * Return: new node
 */

dlistint_t *createNode(int new_data) 
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	new_node->n = new_data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: 
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = createNode(n);

	new_node->next = *head;

	if (head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
}
