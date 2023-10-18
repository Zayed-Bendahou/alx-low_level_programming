#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 if true, else 0
*/

int _strmcp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
