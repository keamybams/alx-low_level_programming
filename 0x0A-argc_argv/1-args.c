#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);

	printf("%s\n", argv[0]);

	return (0);
}
