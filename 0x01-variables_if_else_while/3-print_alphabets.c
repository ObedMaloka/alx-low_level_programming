#include <stdio.h>
/**
 * main - Function that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: Returns (0) after execution
 */
int main(void)
{
	char lowercaseAlphabets, uppercaseAlphabets;

	for (lowercaseAlphabets = 'a'; lowercaseAlphabets <= 'z'; lowercaseAlphabets++)
	{
		putchar(lowercaseAlphabets);
	}

	for (uppercaseAlphabets = 'A'; uppercaseAlphabets <= 'Z'; uppercaseAlphabets++)
	{
		putchar(uppercaseAlphabets);
	}

	putchar('\n');

	return (0);
}
