#include "main.h"
/**
 * is_prime_number - says if number is  prime number or not
 * @n: number  to evalute
 *
 * Return : 1 if n is a prime number and 0 if n  is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n,n-));
}
/**
 * actual_prime- calculates if a number is prime recursively
 * @n : number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is a prime number and 0 if n is not
 */
int is_prime_number(int n)
{
	if (i == 1)
		return (1);
	if (n % i ==0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));;
}
