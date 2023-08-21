#include "main.h"

/**
 * print_string - print a string on the output
 * @str: string to print
 *
 * Return: the lenght of the string printed
 */
int print_string(char *str)
{
    int len = 0;
    char *str2 = "(null)";

    if (str == NULL)
    {
        while (*str2)
        {
            write(1, str2, 1);
            str2++;
        }
    }
    else
    {
        while (*str != '\0')
        {
            write(1, str, 1);
            str++;
            len++;
        }
    }

    return len;
}
