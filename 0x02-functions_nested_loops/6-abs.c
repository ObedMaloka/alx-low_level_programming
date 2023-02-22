#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @a: Parameter for absolute value
 * Return: Returns result of computation
 */

int _abs(int a)
{
	if (a < 0)
		a = a * (-1);
	return (a);
}
