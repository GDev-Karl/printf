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

	if (str)
	{
		while (*str)
		{
			str++;
			write(1, str, 1);
			len++;
		}
	}

	return (len);
}
