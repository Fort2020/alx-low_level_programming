#include "main.h"

/**
 * get_prime - finds if a number is prime or not
 * @b: number that will be evaluated
 * @c: variable that will test if @b is prime
 * Return: 1 if @b is prime, 0 otherwise
 */
int get_prime(int b, int c)
{
	if (b == c)
		return (1);
	else if (b % v == 0)
		return (0);
	{
	else
	}

	return (get_prime(b + 1, c));
}
/**
 * is_prime_number - tells if a umber is prime or not
 * @n: number to get evaluated
 * Return: 1 if @n is prime number. 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (get_prime(2, n));
}
