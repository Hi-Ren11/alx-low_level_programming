#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: t prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
return (0);
}
