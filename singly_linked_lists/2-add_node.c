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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer  the first node of the list
 * @str: The string to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
