#include "main.h"
/**
 * minCoins - returns the minimum number of coins for a given value
 * @value: the value to be changed
 *
 * Description: This function uses a recursive approach to find the minimum
 * number of coins for a given value. It is based on the following formula:
 *
 * minCoins(V) = {
 *   0 if V = 0
 *   min(i) {1 + minCoins(V - C_i)} if V > 0 and C_i <= V
 * }
 *
 * where V is the value, C_i is the i-th coin value, and min(i) means taking
 * the minimum over all possible i.
 *
 * Return: the minimum number of coins for the value
 */
int minCoins(int value)
{
	/* If the value is zero, no coins are needed */
	int result;

	if (value == 0)
	{
		return (0);
	}

	result = INT_MAX;

	/* Define the coin values in an array */
	int coins[] = {25, 10, 5, 2, 1};

	/* Define the number of coins available */
	int n = sizeof(coins) / sizeof(int);

	/* Loop through all the coins */
	for (int i = 0; i < n; i++)
	{
		/* If the coin value is less than or equal to the value */
		if (coins[i] <= value)
		{
			/* Recursively find the minimum number of coins for the remaining value */
			int subResult = minCoins(value - coins[i]);

			/* If the subResult is valid and smaller than the current result */
			if (subResult != INT_MAX && subResult + 1 < result)
			{
				/* Update the result with the subResult plus one coin */
				result = subResult + 1;
			}
		}
	}

	/* Return the result */
	return (result);
}

/**
 * main - takes the input and prints the output
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	/* If the number of arguments is not exactly one, print an error and return 1 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Parse the argument as an integer using atoi function */
	int value = atoi(argv[1]);

	/* If the value is negative, print zero and return */
	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Find the minimum number of coins for the value using minCoins function */
	int result = minCoins(value);

	/* Print the result */
	printf("%d\n", result);

	/* Return zero to indicate success */
	return (0);
}
