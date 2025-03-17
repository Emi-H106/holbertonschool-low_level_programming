#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a pointer of name
 * @f: a pointer of function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
