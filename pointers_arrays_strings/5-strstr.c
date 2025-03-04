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
	int i, j, k;

	if (*needle == '\0')
	{
		return (haystack);
	}
	else
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (*(haystack + i) == *needle)
			{

			for (j = k, k = 0; *(haystack + j) == *(needle + k); j++, k++)
			{
				if (*(haystack + K) == '\0')
				{
					return (haystack + i);
				}
			}
			}
		}
	}
	return (NULL);
}
