#include "main.h"


/**
 * *leet - encodes a string into 1337.
 * @str: a string
 * Return: str
 */


 char *leet(char *str)
{
	char alphabet[10] = {'a', 'A' ,'e', 'E', 'o', 'O', 't' ,'T', 'l', 'L'};
	char number[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;
	
	for (i = 0; str[i] != '\0', i++)
	{
		for (j = 0, j < 10, j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = number[j];
			}
		}
	}
	return (str);
}
