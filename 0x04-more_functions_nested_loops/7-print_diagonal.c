#include "main.h"

/**
 * print_diagonal - function that prints a diagonal line
 *
 * @n: number of the times \ should be printed
 *
 * Return: always 0
*/

void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < n; s++)
			{
				if (s == i)
					_putchar('\\');
				else if (s < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
