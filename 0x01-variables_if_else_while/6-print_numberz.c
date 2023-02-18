#include <stdio.h>
/**
 * main - Prints all single digit numbers
 * of base 10 starting from 0
 * Return: Returns (0) after execution
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');

	return (0);
}
