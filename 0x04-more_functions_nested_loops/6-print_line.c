#include "main.h"

/**
 * print_line - Draws a straight line in the termial
 * @n: Paramter for drawing a line
 * Return: Returns void after execution
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		_putchar('_');
}
