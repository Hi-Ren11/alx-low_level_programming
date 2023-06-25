#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sum a and b
  * @a: int
  * @b: int
  *
  * Return: int
  */

int op_add(int a, int b)
{
	return (a + b);
}


/*********** OP_SUB ***********/

/**
  * op_sub - subtracts two int
  * @a: int
  * @b: int
  *
  * Return: int
  */

int op_sub(int a, int b)
{
	return (a - b);
}


/*********** OP_MUL **********/

/**
  * op_mul - multiplies int
  * @a: int
  * @b: int
  *
  * Return: int
  */

int op_mul(int a, int b)
{
	return (a - b);
}


/********** OP_div **********/

/**
  * op_div - Division
  * @a: int
  * @b: int
  *
  * Return: int
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/*********** OP_MOD ***********/

/**
  * op_mod - remainder of  division
  * @a: int
  * @b: int
  *
  * Return: int
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
