#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	while (n > 10)
	{
		int digit = n % 10;
		_putchar('digit');
	return (digit);
}
