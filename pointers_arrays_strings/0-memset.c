#include "main.h"

/**
 * *_memset -  fills memory with a constant byte.
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled starting
 * Return: a pointer to the memory area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (*s && n > 0)
	{
		s = b;
		b++;
		n--;
	}
	return (s);
}
