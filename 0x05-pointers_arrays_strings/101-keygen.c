#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    const char *valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    srand(time(NULL));
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = valid_chars[rand() % 62];
    }
    password[PASSWORD_LENGTH] = '\0';
    printf("%s\n", password);
    return (0);
}

