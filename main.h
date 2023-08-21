#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h> /* for variadic macros */
#include <unistd.h> /* for write function */

int _printf(const char *format, ...);
int test(const char *format, va_list args);
int print_string(char *str);
int print_percent(void);
int print_char(char ch);
int print_dec(int d);
int print_int(int i);
int _printf_decimal(const char *format, ...);

#endif
