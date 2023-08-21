#include "main.h"

/**
 * test - format character, strings, and percentage
 * @format: format that can influence output
 * @index: the index of the character or a format symbol
 * @args: arguments list
 *
 * Return: printed characters
 */
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
	return (printed_chars);
}
