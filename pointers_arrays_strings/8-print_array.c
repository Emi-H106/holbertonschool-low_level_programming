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

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
		printf("%d,", a[i]);
		}
	}
	printf("\n");
}
