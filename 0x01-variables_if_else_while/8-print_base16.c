#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;
	for (n = 0; n < 16; n++)
	{
		if (n < 10)
			putchar(n + '0');
		else
			putchar(n - 10 + 'a');
		putchar('\n');
	}
	return (0);
}
