#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n, m;

	for (i = '0'; i < '9'; i++)
	{
		for (n = i + 1; n <= '9'; n++)
		{
			for (m = n + 1; m <= '9'; m++)
			{
				putchar(i);
				putchar(n);
				putchar(m);

				if (i != '7' || n != '8' || m != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
