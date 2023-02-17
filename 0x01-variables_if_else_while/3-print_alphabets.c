#include <stdio.h>
/**
 * main - Function that prints the alphabet in lowercase, and then in uppercase, followed by a new line
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
