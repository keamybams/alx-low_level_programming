#include "main.h"
#include <stdio.h>

/**
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
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
