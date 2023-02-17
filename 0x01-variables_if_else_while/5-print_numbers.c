#include <stdio.h>
/**
 * main - Print all single digit numbers
 * of base 10 starting from 0
 * Return: Return (0) after execution
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}

	printf("\n");

	return (0);
}
