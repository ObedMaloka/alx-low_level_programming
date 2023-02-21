/**
 * Below is main.h header file that has
 * a prototype called in the print_alphabet function
 */

#include "main.h"

/**
 * print_alphabet() - Prints lowercase letters a-z
 * Return: Returns (0) after execution
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

	return;

}
