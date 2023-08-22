#include "main.h"
/**
 * print_int - prints numbers
 * @num: number to be print
 *
 * Return: number of digits
 */

int print_int(int num)
{
	char buffer[BUFFER_SIZE];
	int i, len = 0;
	int printed_digit = 0;

	if (num == 0)
	{
		printed_digit += print_char('0');
		return (printed_digit);
	}
	if (num < 0)
	{
		printed_digit += print_char('-');
		num = -num;
	}
	while (num > 0)
	{
		buffer[len++] = (num % 10) + '0';
		num /= 10;
	}
	for (i = len - 1; i >= 0; i--)
	{
		printed_digit += print_char(buffer[i]);
	}
	return (printed_digit);
}
