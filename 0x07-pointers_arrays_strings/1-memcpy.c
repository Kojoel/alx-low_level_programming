#include "main.h"

/**
  * _memcpy - this function copies memory data
  * @dest: memory area where storage is done
  * @src: memory area from which copying is done
  * @n: number of bytes to be occupied
  * Return: n bytes copyed
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int h = n;

	for (a = 0; a < h; a++)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}
