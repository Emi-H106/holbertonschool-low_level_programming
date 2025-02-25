#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (int size = 1; size <= n; size++)
	{
		for (i = 1; i <= j + 1 - size; i++)
		{
		_putchar(" ");
		}
		for (i = 1; i <= siwe - 1; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
