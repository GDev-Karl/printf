#include "main.h"

/**
 * print_char - print a character to the output
 * @ch: characters to print
 *
 * Return: 1 success
*/
int print_char(char ch)
{
	write(1, &ch, 1);
	return (1);
}
