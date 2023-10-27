#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
