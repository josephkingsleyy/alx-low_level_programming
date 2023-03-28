#include "main.h"

/**
 * _puts - a function that prints a string to stdout followed by a new line
 *
 * @str: Variable holding string to be printed
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar("\n");
}
