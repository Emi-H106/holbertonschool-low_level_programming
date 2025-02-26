#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n:a pointer the integer we want to set to 98
 * Return: void
 */


void reset_to_98(int *n)
{
	int a = 98;
	 n = &a;
	*n = a;
}
