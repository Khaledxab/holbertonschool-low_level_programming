#include "main.h"
int check(int i, int n);
/**
 * check - returns 1 if n is prime, 0 otherwise
 * @n: number for checking 
 * @i: possible factor of n
 *
 *Return: return 1 if prime or 0 if not
 */
int check(int i, int n)
{
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (check(i + 1, n));
}
/**
 * is_prime_number - returns 1 if prime, 0 otherwise
 * @n: number checking
 *
 * Return: return 1, otherwise 0
 */
int is_prime_number(int n)
{
	return (check(2, n));
}
