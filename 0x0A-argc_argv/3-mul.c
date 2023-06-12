#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if argument is less than 2 else 0
 */

int main(int argc, char **argv)
{
	int x;
	int y;
	int mul;

	if (argc > 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;

		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
