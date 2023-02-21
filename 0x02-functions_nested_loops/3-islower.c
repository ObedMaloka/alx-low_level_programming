#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Checks c for lowercase character
 * Return: Returns (1) paramter c is lowercase, otherwise (0)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
