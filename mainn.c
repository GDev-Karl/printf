#include "main.h"
#include <stdio.h>
int main()
{
	int num1 = 42;
	int num2 = -123;
	printf("Testing using printf:\n");
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	printf("\nTesting using _printf_decimal:\n");
	_printf_decimal("num1: %d\n", num1);
	_printf_decimal("num2: %d\n", num2);
	return 0;
}
