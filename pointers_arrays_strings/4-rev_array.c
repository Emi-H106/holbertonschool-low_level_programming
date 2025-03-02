#include "main.h"


/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: void
 */


void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int tmp;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		start++;
		end--;
	}
}
