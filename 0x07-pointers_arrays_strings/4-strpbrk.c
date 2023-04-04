#include "main.h"
/**
 * _strpbrk - function that searches for string
 * @s: first occurence in string
 * @accept: takes input
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
	s++;
	}
	return ('\0');
}
