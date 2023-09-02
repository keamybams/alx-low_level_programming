#include <stdio.h>
#include "main.h"

int main(void)
{
	char result[100];
	char *n1 = "123456789";
	char *n2 = "987654321";

       	if (infinite_add(n1, n2, result, sizeof(result)))
	{
		printf("Sum: %s\n", result);
	}
       	else
	{
		printf("Result cannot fit in the buffer.\n");
	}

	return (0);
}
