#include<stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: Pointer to the head of the list
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
