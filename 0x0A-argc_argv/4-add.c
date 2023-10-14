#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* loop over the arguments */
	for (i = 1; i < argc; i++)
	{
		/* convert each argument to an integer and add it to sum */
		sum += atoi(argv[i]);

		/* check if any argument is not a digit */
		if (argv[i][0] < '0' || argv[i][0] > '9')
		{
			/* print error message and return 1 */
			printf("Error\n");
			return (1);
		}
	}

	/* print result followed by newline */
	printf("%d\n", sum);

	return (0);
}

