#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	/* check if there are exactly two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		prod = num1 * num2;

		printf("%d\n", prod);

		return (0);
}
