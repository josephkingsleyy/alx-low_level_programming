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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = i - 1; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
