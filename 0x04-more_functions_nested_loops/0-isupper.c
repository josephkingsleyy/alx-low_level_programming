#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: single letter input
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
		return (1);
	else
		return (0);
}
