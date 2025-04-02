#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: the data of dlistint_t list
 * Return: the address of the new element, or NULL if it failed
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	dlistint_t *temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;
}
