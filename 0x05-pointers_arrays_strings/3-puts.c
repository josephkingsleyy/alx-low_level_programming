#include "main.h"

/**
 * _puts - a function that prints a string to stdout followed by a new line
 *
 * @str: Variable holding string to be printed
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar("%c\n", str[index]);
	}
	_putchar("\n");
}
