#include "main.h"
#include <unistd.h>

/**
 * _putchar - Custom implementation of putchar.
 * @c: The character to print.
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_alphabet - Prints the alphabet in lowercase.
 */
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
