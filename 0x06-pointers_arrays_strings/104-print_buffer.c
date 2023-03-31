#include "main.h"

/**
 * print_buffer - prints the content of a buffer
 *
 * @b: pointer to buffer
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
    int i, j;
    char hex[2], c;

    if (size <= 0)
    {
        char newline = '\n';
        write(STDOUT_FILENO, &newline, 1);
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        char position[8];

        sprintf(position, "%08x", i);
        write(STDOUT_FILENO, position, 8);
        write(STDOUT_FILENO, ": ", 2);

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                hex[0] = "0123456789abcdef"[(*(b + i + j) >> 4) & 0x0F];
                hex[1] = "0123456789abcdef"[*(b + i + j) & 0x0F];
                write(STDOUT_FILENO, hex, 2);
            }
            else
            {
                write(STDOUT_FILENO, "  ", 2);
            }

            if (j % 2 != 0)
            {
                write(STDOUT_FILENO, " ", 1);
            }
        }

        for (j = 0; j < 10 && i + j < size; j++)
        {
            c = *(b + i + j);

            if (c >= ' ' && c <= '~')
            {
                write(STDOUT_FILENO, &c, 1);
            }
            else
            {
                write(STDOUT_FILENO, ".", 1);
            }
        }

        char newline = '\n';
        write(STDOUT_FILENO, &newline, 1);
    }
}

