#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Assign a random number to the variable n each time it is executed
 * Return: Return (0) after execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}

	return (0);
}
