#include "main.h"

/**
 * print_line - a function that draws a straight line
 *
 * @n: the number of times _ should be printed
 * 
 * Description: can only use _putchar() to print
 * 
 * Return: Always 0 (Success)
 *
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		_putchar("-");

		i++;
	}

	_putchar('\n')
}
