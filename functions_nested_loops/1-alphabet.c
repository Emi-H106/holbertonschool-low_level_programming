#include <stdio.h>
#include "main.h"


/**
 * print_alphabet-prints the alphabet, in lowercase
 *
 * Return: void.
 */



void print_alphabet(void);

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
	return (0);
}
