#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10x the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, count;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		count++;
		_putchar('\n');
	}
}
