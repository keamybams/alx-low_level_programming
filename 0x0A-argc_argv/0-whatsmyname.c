#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 * */

int main(int argc, char *argv[])
{
	char *name = argv[0];
	char *last_slash = strrchr(name, '/');

	if (last_slash != NULL)
	{
		name = last_slash + 1;
	}

	printf("%s\n", name);
	return (0);
}
