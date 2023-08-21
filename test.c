#include "main.h"

/**
 * test - format character, strings, and percentage
 * @format: format that can influence output
 * @args: arguments list
 *
 * Return: printed characters
 */
int test(const char *format, va_list args)
{
	int printed_chars = 0;

	switch (*format)
	{
		case 'c':
			printed_chars += print_char((char)va_arg(args, int));
			break;
		case 's':
			printed_chars += print_string(va_arg(args, char *));
			break;
		case '%':
			printed_chars += print_char("%");
			break;
		default:
			printed_chars += print_char('?');
			break;
	}
	return (printed_chars);
}
