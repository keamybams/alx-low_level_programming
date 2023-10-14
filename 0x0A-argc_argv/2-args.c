#include "main.h"
/**
 * main - prints all command-line arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
