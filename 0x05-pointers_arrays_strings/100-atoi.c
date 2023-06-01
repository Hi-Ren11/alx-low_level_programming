#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int ui = 0;
	int b = 1;
	int c = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			b *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			c = 1;
			ui = (ui * 10) + (s[a] - '0');
			a++;
		}

		if (c == 1)
		{
			break;
		}

		a++;
	}

	ui *= b;
	return (ui);
}
