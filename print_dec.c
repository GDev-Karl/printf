#include "main.h"
/**
 * print_dec - print decimal to the output
 * @d: decimal to print
 *
 * Return: number of bytes
 */

int print_dec(int d)
{
	write(1, &d, 4);
	return (4);
}
