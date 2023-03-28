#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s:Variable that holds the string
 */
void rev_string(char *s)
{
	int *end = s;
	char temp;

	if (s)
	{
		while (*end)
		{
			end++;
		}
		end--;

		while (s < end)
		{
			temp = *s;
			*s++ = *end;
			*end-- = temp;
		}
	}
}
