#include "main.h"

/**
  * _strchr - function to locate character in string
  * @c: first occurence in the string
  * @s: signifies the string
  * Return: always 0
  */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}

	return (0);
}
