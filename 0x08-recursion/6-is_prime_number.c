#include "main.h"

/**
 * checker - function to check if number is prime
 * @a: integer
 * @b: integer
 */

int checker(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (b > a / 2)
		return (1);
	else
		return (checker(a + 1, b));

}
/**
 * is_prime_number - a function that returns 1 if the input integer is a prime
 * @n: integer to be checked
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
