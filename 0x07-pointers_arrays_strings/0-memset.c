#include "main.h"

/**
  * _memset - function that fills the first n bytes of memory area
  * Description - writing a function to fill memory with constant byte
  * @s: signifies starting address
  * @b: signifies the constant byte
  * @n: signifies the number of bytes to be filles
  * Return: the changed array with the new n bytes value
  */

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
