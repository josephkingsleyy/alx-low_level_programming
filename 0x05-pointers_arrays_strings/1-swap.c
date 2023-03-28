#include "main.h"

/**
 * swap_int - a function that swaps the values of two numbers of type int
 *
 * @a: First number of type int
 * @b: Second number of type int
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
