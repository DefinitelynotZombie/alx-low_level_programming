#include "main.h"
/**
* is_prime_number - returns true if the number is prime
*@n: the number to verify
*
*Return: true if the number is prime
*/
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
* is_prime - prints out 1 if number is prime
* @n: number to be verified
* @start: number to start checking from
*
* Return: 1 if number is prime, 0 otherwise
*/

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
