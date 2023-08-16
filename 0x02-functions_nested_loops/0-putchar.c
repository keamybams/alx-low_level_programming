#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_putchar();
	return (0);
}

/**
 * print_putchar - Prints the _putchar string followed by a new line
 */
void print_putchar(void)
{
	char str[] = "_putchar\n";

	write(1, str, sizeof(str) - 1);
}
