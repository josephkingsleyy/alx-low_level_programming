#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes- prints opcodes of its own main function
 * main: entry point
 * Return: opcodes to be printed in Hexadecimal
 */

void print_opcodes(int n_bytes);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    int n_bytes = atoi(argv[1]);
    if (n_bytes < 0)
    {
        printf("Error\n");
        return (2);
    }
    print_opcodes(n_bytes);
    return (0);
}

void print_opcodes(int n_bytes)
{
    unsigned char *p = (unsigned char *)&print_opcodes;
    for (int i = 0; i < n_bytes; i++)
    {
        printf("%02x", *(p + i));
    }
    printf("\n");
}

