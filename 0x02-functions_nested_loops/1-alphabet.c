#include "main.h"

/**
  *print_alphabet - function entry point
  *_putchar: print the alphabets putchar
  * Description: print the alphabets putchar
  * Return: always 0
  */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

