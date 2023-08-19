#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 100; i++)
	{
		for (n = i + 1; n < 100; n++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + n / 10);
			putchar('0' + n % 10);

			if (i != 98 || n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
