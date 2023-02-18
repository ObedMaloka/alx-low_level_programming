#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Assign a random number to the variable n & print last number of n
 * Return: Return (0) after execution
 */
int main(void)
{
	int n, lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNumber = n % 10;

	if (lastNumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNumber);
	}
	else if (lastNumber == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNumber);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNumber);
	}

	return (0);
}
