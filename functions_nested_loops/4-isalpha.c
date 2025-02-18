#include "main.h"

/**
 * _isalpha: Check if a character is an alphabet letter
 * @c: character for check ,type int
 * Return: 1 if c is a letter, lowercase or uppercase,0 otherwise
 */


int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
	return(0);
	}
}	
