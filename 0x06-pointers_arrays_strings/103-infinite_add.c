#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result can't fit in the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, maxlen, carry = 0, i, j, k;
    char temp;

    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    maxlen = (len1 > len2 ? len1 : len2) + 1;

    if (maxlen > size_r)
        return (0);

    i = len1 - 1;
    j = len2 - 1;
    k = maxlen - 2;

    while (i >= 0 || j >= 0)
    {
        int digit1 = (i >= 0 ? n1[i] - '0' : 0);
        int digit2 = (j >= 0 ? n2[j] - '0' : 0);
        int sum = digit1 + digit2 + carry;

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
            carry = 0;

        r[k--] = sum + '0';
        i--;
        j--;
    }

    if (carry > 0)
        r[k--] = carry + '0';
    else
        maxlen--;

    for (i = 0; i < (maxlen - 1) / 2; i++)
    {
        temp = r[i];
        r[i] = r[maxlen - 2 - i];
        r[maxlen - 2 - i] = temp;
    }

    r[maxlen - 1] = '\0';

    return (r);
}

