#include "main.h"

/**
 * _strstr - function to locate substring
 * @haystack: main string
 * @needle: the first occurence of substring
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')

			return (haystack);
	}
	return (0);
}
