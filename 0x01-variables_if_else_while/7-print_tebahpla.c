#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: always 0
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
