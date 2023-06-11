#include "main.h"
#include <stddef.h>

/**
 * _strstr - write a func that locates a substr
 *
 * @haystack: input
 * @needle: input
 *
 * Return: heystack or NULL if the substr is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *q = needle;

		while (*q != '\0' && *p == *q)
		{
			p++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
		haystack++;
	}
		return (NULL);
}
