#include "main.h"
#include <stddef.h>


/**
 * *_strstr - locates a substring.
 * @haystack: the main string to be examined
 * @needle: the sub-string to be searched in string
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

	if (*n == '\0')
	{
		return (haystack);
	}
	}
	return (NULL);
}
