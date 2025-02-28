#include <stdio.h>
#include "main.h"


/**
 * print_array -  prints n elements of an array of integers
 * @a:an array
 * @n:element of an array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;
	*a = a[n];

	if (i == n)
	{
		printf("%d", a[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n");
}
