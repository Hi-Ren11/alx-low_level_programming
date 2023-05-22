#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: always zero
 */

int  main(void)
{
	int y;
	int z;

	for (y = '0'; y <= '9'; y++)
	{
		for (z = '1'; z <= '9'; z++)
		{
			if (z > y)
			{
				putchar(y);
				putchar(z);
				if (y == '8' && z == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
