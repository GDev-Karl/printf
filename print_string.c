#include "main.h"

/**
 * print_string - print a string on the output
 * @str: string to print
 *
 * Return: the lenght of the string printed
*/
int print_string(char *str)
{
	if (str == NULL)
	{
		str = "(null)";
		return (0);
	}
	int len = 0;

	while (str[len])
	{
		len++;
	}
	write(1, str, len);

	return (len);
}
