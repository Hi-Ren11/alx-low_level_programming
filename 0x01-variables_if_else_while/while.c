#include <stdio.h>

int main(void)
{
	int a = '0';
	int b = '1';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (b > a)
			{
				putchar(a);
				a++;
				putchar(b);
				b++;
				if (a == '8' && b == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

return (0);
}
