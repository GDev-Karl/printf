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

	if (str == NULL)
		return (0);

	while (str[len])
	{
		len++;
	}
	write(1, str, len);

	return (len);
}
