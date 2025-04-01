#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to a pointer  the first node of the list
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
