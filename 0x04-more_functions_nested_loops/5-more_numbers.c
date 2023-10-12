#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int r, l;

	for (r = 1; r <= 10; r++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l >= 10)
			{
				_putchar('1');
				_putchar(l % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
