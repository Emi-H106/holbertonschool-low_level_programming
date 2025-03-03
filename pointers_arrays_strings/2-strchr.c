#include "main.h"


/**
 * *_strchr - locates a character in a string
 * @s: It is the string in which we have to search the character
 * @c: It is a character to be searched in the string
 * Return: a pointer to the first occurrence of the character c in the string s
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
