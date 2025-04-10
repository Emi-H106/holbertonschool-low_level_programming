#include <stdio.h>
#include "lists.h"


/**
 * print_dlistint - all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	if (h == NULL)
	{
		;
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
