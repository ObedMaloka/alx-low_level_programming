#include "main.h"

/**
 * print_sign - Prints the numerical sign of a number
 * @n: Number checked for numerical sign
 * Return: Returns (1), (0) or (-1) based on the result of @n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
