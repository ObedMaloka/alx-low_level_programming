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
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
