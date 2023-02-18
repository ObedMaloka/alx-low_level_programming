#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabets in lowercase, except q & e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e')
			putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
