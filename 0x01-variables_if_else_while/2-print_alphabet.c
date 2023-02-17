#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase, followed by a new line
 * Return: Returns (0) after execution
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
