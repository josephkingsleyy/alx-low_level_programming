#include "main.h"

/**
 * more_numbers - make numbers x10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	char c;
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