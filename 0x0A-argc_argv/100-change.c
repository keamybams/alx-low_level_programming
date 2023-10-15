#include "main.h"
/**
 * minCoins - Calculate the minimum number of coins needed for a given value.
 * @value: The value for which to calculate the minimum number of coins.
 *
 * This function uses a recursive approach to find the minimum
 * number of coins for a given value. It is based on the following formula:
 *
 * minCoins(V) = {
 *   0 if V = 0
 *   min(i) {1 + minCoins(V - C_i)} if V > 0 and C_i <= V
 * }
 *
 * Where V is the value, C_i is the i-th coin value, and min(i) means taking
 * the minimum over all possible i.
 *
 * Return: The minimum number of coins required for the value.
 */
int minCoins(int value);

int minCoins(int value)
{
    int result;
    int coins[] = {25, 10, 5, 2, 1};
	int n, i;

    if (value == 0)
    {
        return 0;
    }

    result = INT_MAX;

    n = sizeof(coins) / sizeof(int);


    for (i = 0; i < n; i++)
    {
        if (coins[i] <= value)
        {
            int subResult = minCoins(value - coins[i]);

            if (subResult != INT_MAX && subResult + 1 < result)
            {
                result = subResult + 1;
            }
        }
    }

    return result;
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
    int value;
    int result;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    value = atoi(argv[1]);

    if (value < 0)
    {
        printf("0\n");
        return 0;
    }

    result = minCoins(value);

    printf("%d\n", result);

    return 0;
}
