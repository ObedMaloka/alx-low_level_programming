#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Parameter passed into _isupper function
 * Return: Returns (1) if input is uppercase, otherwise (0)
 */

int _isupper(int c)
{
	if (c =='A' && c <= 'Z')
		return (1);
	else
		return (0);
}
