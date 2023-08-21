#include "main.h"

/**
 * print_int - print a integer to the output
 * @i: character to print
 *
 * Return: number of bytes
*/
int print_int(int i)
{
	write(1, &i, 4);
	return (4);
}
