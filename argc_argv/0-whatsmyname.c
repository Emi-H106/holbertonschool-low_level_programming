#include "main.h"
#include <stdio.h>



/**
 * main -  Print the Program Name
 * @argc: a total number of arguments
 * @argv: an array of character pointers
 * Return: the program name
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);
	}
	_putchar('\n');
}
