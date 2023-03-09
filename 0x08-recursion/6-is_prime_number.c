#include "main.h"

/**
  * is_prime_number - will check if int is prime
  * @n : input int
  *
  * Return: return int
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(2, n));
}

/**
  *_prime - returns the prime of an int
  *@x : input guess number
  *@n : number to be checked
  *
  * Return: int
  */

int _prime(int n, int x)
{
	if (x % n == 0 && n < x)
		return (0);
	else if (x % n == 0 && x == n)
		return (1);
	else
		return (_prime(n + 1, x));
}
