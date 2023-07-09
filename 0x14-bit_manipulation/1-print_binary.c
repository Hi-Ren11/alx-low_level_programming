#include <stdio.h>
#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}


/*
 * _power - calculate (base and power)
 * @base - base of the exponet
 * @pow - power of the exponet
 * Return -  value of base and power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}
