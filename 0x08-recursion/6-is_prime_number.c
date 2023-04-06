#include "main.h"

int actual_prime(int n, int i);

/**
  * is_prime_number - function that returns 1 if number is prime
  * @n: number to be evaluated
  * Return: 1 if n is a prime number, 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}

/**
  * actual_prime - calculates if a number is prime recursively
  * @n: number to evaluate
  * @t: iterator
  * Return: 1 if n is prime, 0 if not
  */

int actual_prime(int n, int t)
{
	if (t == 1)
		return (1);
	if (n % t == 0 && t > 0)
		return (0);
	return (actual_prime(n, t - 1));
}
