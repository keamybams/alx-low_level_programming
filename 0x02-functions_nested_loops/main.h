#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * print_alphabet - Prints the alphabets in lowercase by a new line
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

#endif
