#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: always zero
 */

int main(void)
{
	int num = '0';
	int alp = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
