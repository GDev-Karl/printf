#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format that can influence output
 *
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_char = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			printed_char += print_char(*format);
		}
		else
		{
			format++;
			printed_char += test(format, args);
		}
		format++;
	}
	va_end(args);

	return (printed_char);
}
