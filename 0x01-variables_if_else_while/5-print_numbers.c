#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	printf("\n");
return (0);
}
