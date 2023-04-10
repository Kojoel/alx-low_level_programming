#include <stdio.h>
#include "main.h"

/**
  * main - Entry point to print number of arguments
  * @argc: Number of arguments
  * @argv: Arguments in array
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
