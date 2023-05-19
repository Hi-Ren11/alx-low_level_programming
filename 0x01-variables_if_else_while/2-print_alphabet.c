#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
		putchar('\n');
	return (0);
}
