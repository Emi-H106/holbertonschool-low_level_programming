#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: the value of the last digit
 */

int print_last_digit(int x,y)
{
	y = x % 10;
	return(y);
}
