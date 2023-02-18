#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse
 * Returns: Returns (0) after execution
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
