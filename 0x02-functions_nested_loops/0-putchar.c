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

/* print_putchar - to print */
void print_putchar(void)
{
	char str[] = "_putchar\n";

	write(1, str, sizeof(str) - 1);
}
