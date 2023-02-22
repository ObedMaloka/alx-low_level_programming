#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @num: Parameter for last digit number
 * Return: Returns the value of the last digit
 */

int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * (-1);

	}
	_putchar(lastDigit + '0');


	return (lastDigit);
}
