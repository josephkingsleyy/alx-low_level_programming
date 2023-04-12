#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The string to count the words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int num_words = 0;
    char *p = str;

    while (*p != '\0')
    {
        if (*p == ' ')
        {
            p++;
            continue;
        }

        num_words++;

        while (*p != '\0' && *p != ' ')
        {
            p++;
        }
    }

    return (num_words);
}

/**
 * word_length - Get the length of a word in a string.
 * @str: The string containing the word.
 *
 * Return: The length of the word.
 */
int word_length(char *str)
{
    int len = 0;

    while (*str != '\0' && *str != ' ')
    {
        len++;
        str++;
    }

    return (len);
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL or
 *         empty, or if memory allocation fails.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
    {
        return (NULL);
    }

    int num_words = count_words(str);

    char **words = (char **) malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
    {
        return (NULL);
    }

    int i = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            str++;
            continue;
        }

        int len = word_length(str);

        char *word = (char *) malloc((len + 1) * sizeof(char));
        if (word == NULL)
        {
            for (int j = 0; j < i; j++)
            {
                free(words[j]);
            }
            free(words);
            return (NULL);
        }

        int k = 0;
        while (*str != '\0' && *str != ' ')
        {
            word[k] = *str;
            k++;
            str++;
        }
        word[k] = '\0';

        words[i] = word;
        i++;
    }

    words[num_words] = NULL;
    return (words);
}
