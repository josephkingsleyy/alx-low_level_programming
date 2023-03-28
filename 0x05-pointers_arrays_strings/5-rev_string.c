#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	char ch, *p, *q;

	for (q = s; *q != '\0'; ++q)
		;
	if (q > s)
		--q;
	for (p = s; p < q; ++p, --q)
	{
		ch = *p;
		*p = *q;
		*q = ch;
	}
	return (s);
}
