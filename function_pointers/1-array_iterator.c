#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array
 * @array: a pointer of an array
 * @size: size of an array
 * @action: a pointer of a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
