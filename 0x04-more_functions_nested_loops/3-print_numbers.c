#include "main.h"

/**
 * print_numbers - a function that prints numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0 (SUccess)
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
