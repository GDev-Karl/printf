#include "main.h"
/**
 * _printf_decimal - produces output according to a format
 * @format: character string
 *
 * Return: characters printed excluding
 * the null byte used to end output to strings
 */

int _printf_decimal(const char *format, ...)
{
	int chara_count = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chara_count++;
		}
		else
		{
			if (*format == '\0')
				break;
			if (*format  == '%')
				chara_count = chara_count + print_percent();
			if (*format  == 'd')
				chara_count = chara_count + print_int(*format);
			if (*format  == 'i')
				chara_count = chara_count + print_dec(*format);
		}
		format++;
	}
	va_end(list);
	return (chara_count);
}
