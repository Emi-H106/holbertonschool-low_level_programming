#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer of int a
 * @b: pointer of int b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
