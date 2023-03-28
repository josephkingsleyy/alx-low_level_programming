#include "main.h"

/**
 * int _strlen - a function that returns the length of a string
 *
 * @s: Variable holding the string
 *Return: len as the lentgth of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
