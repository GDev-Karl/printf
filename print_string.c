#include "main.h"

/**
 * print_string - print a string on the output
 * @str: string to be printed
 *
 * Return: the lenght of the string printed
 */
int print_string(char *str)
{
	int len = 0;

	if (*str)
	{
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
			len++;
		}
	}

	return (len);
}
