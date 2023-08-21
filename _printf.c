#include "main.h"

/**
 * _printf -produces output according to a format
 * @format: format that can influence output
 *
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, printed_char = 0;

	va_start(args, format);
	i = 0;

	while (format[i])
	{
		if (format[i] != '%')
		{
			printed_char += print_char(format[i]);
		}
		else
		{
			i++;
			printed_char += test(format, i, args);
		}
		i++;
	}
	va_end(args);

	return (printed_char);
}
