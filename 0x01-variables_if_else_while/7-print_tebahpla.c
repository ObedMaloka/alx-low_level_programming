#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints lowercase alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
