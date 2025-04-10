#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - calculates the length of the string
 * @s: the string
 * Return: the length of a string
 */

size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * add_node_end - adds a new node at end of a list_t list
 * @head: a pointer to a pointer  the first node of the list
 * @str: The string to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
