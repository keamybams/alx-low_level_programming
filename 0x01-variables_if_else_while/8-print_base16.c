#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
