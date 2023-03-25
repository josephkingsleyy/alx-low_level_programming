#include "main.h"

/**
 * more_numbers - print numbers x10
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int i = 0;

	while (i <= 9)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
