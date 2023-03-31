#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string to be encoded
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
    int i, j;
    char leet_letters[10] = "aeotlAEOTL";
    char leet_codes[10] = "4307143071";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == leet_letters[j])
            {
                str[i] = leet_codes[j];
                break;
            }
        }
    }

    return (str);
}

