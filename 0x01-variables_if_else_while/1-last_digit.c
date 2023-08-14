#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	int lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is greater than 5", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0", lastDigit);
	}
	printf("\n");
	return (0);
}
