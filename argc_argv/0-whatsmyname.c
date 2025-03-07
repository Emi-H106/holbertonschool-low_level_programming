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
	int i = 0;

	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			_putchar([0][i]);
			i++;
		}
	_putchar('\n');

	return (0);
}
