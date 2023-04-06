#include "main.h"

/**
  * _sqrt_recursion - function that returns the natural square root
  * @n: number whose root is to be found
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1)

	return (actual_sqrt_recursion(n, 0));
}

/**
  * actual_sqrt_recursion - funcion to find natural squre root
  * @n: number of square root to be calculated
  * @t: iterator
  * Return: return the final square root
  */

int actual_sqrt_recursion(int n, int t)
{
	if (t * t > n)
		return (-1)

	if (t * t == n)
		return (t);

	return (actual_sqrt_recursion(n, t + 1));
}
