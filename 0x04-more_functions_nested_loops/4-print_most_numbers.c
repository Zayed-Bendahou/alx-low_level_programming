#include "main.h"

/**
 * print_most_numbers - function that prints digits besides 2 and 4
 *
 * Return: Always 0 (success)
*/

void print_most_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9 && num != 2 && num != 4);
	_putchar('\n');
}
