#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: always 0;
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a == '9')
			break;
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
