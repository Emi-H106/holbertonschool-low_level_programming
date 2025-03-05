#include <stdio.h>
#include "main.h"



/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: array
 * @size: the number of elements in an array
 * Return: void
 */


void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || i + j == size - 1)
			{
				sum = sum + &a[i][j];
				printf("%d", sum);
			}
		}
		printf("\n");
	}
}
