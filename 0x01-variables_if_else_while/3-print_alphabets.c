#include <stdio.h>
/**
 * main - Function that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: Returns (0) after execution
 */
int main(void)
{
	char lAlphabets, uAlphabets;

	for (lAlphabets = 'a'; lAlphabets <= 'z'; lAlphabets++)
	{
		putchar(lAlphabets);
	}

	for (uAlphabets = 'A'; uAlphabets <= 'Z'; uAlphabets++)
	{
		putchar(uAlphabets);
	}

	putchar('\n');

	return (0);
}
