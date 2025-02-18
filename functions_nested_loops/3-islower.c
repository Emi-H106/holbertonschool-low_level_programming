#include "main.h"

/**
 * _islower - check whether the passed character is a lowercase letter
 * @c : character for check ,type : int
 * Return: 1  if c is lowercase letter, 0 otherwise
 */


int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);

}
