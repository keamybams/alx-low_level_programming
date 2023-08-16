#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
