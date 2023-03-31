#include "main.h"

/**
 * char *_strncat - cincatenates two strings
 * @dest: string
 * @src: string
 * @n: a number of elements to concatenate in
 * Return: pointer to resulting 'dest'
 */

char *_strncat(char *dest, char *src, int n) 
{
	    int dest_len = 0;
  	
	    while (dest[dest_len] != '\0') 
	    {
		    dest_len++;
	    }
    
	    int i;

	    for (i = 0; i < n && src[i] != '\0'; i++) 
	    {
		    dest[dest_len + i] = src[i];
	    }
    
	    dest[dest_len + i] = '\0';
	    return dest;
}

