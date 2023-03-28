#include "main.h"

/**
 * _puts - a function that prints a string to stdout followed by a new line
 *
 * @str: Variable holding string to be printed
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	_putchar(*str);
	_putchar("\n");
}
