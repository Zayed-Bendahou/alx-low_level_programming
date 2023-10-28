#include "main.h"

/**
 * _isupper - check if c is uppercase
 *
 * @c: input for letter
 *
 * Return: 1 if uppercase , 0 if lowercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
