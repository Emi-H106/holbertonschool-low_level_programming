#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of
 *                a dlistint_t linked list
 * @head: a pointer to a pointer  the first node of the list
 * Return: the sum of all the data (if the list is empty, return 0)
*/


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
