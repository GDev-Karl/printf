#include "main.h"

int test(const char *format, int index, va_list args)
{
    char character = format[index];
    int printed_chars = 0;

    switch (character)
    {
    case 'c':
        printed_chars += print_char((char)va_arg(args, int));
        break;
    case 's':
        printed_chars += print_string(va_arg(args, char *));
        break;
    case '%':
        printed_chars += print_percent();
        break;
    default:
        break;
    }

    return printed_chars;
}