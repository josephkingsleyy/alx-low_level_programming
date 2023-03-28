#include "main.h"

/**
 * _puts - a function that prints a string to stdout followed by a new line
 *
 * @str: Variable holding string to be printed
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar("\n");
}
