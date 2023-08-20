#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * main - check code
 *
 * Return: Always 0 (Success)
 */

int _putchar(char i)
{
	return write(1, &i, 1);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
