#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	char alphabets;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}

	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');

	return (0);
}

