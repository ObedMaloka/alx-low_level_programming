#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase & uppercase
 * Return: Returns (0) after execution
 */
int main(void)
{
	char l, u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}

	putchar('\n');

	return (0);
}
