#include <stdlib.h>
#include "lists.h"


/**
 * free_dlistint - frees a list_t list
 * @head: a pointer to a pointer  the first node of the list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
