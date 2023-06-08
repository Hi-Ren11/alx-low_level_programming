#include "main.h"

/**
 * checker - checks for sqrt
 * @a: integer
 * @b: integer
 *
 * Return: Integer
 */

int checker(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	else
		return (checker(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be checked
 *
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
		return (checker(1, n));
}
