#include <stdio.h>


/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
