#include "main.h"

/** more_numbers - Print 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: Returns void after execution
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		_putchar(i);
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
	}

	_putchar('\n');
}
