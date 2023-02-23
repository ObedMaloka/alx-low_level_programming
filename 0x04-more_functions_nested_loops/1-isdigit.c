#include "main.h"

/**
 * _isdigit - Checks for a digit 0 to 9
 * @c: Parameter to check for a digit 0 to 9
 * Return: Returns (1) if parameter is a digit 0 to 9, otherwise (0)
 */

int _isdigit(int c)
{
	if (c == '0' && c <= '9')
		return (1);
	else
		return (0);
}
