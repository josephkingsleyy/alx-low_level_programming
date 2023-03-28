#include "main.h"

/**
 * print_rev - a function that prints a string in reverse followed by a new line
 *
 * @s: Variable holding the string to be printed in reverse
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
