#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct _printf_format_struct - structure definition of a printTypeStruct
 * @specifier: type
 * @printer: function to print
 */

typedef struct _printf_format_struct
{
	char specifier;
	int (*printer)(va_list);
} _printf_spec;

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list args);
int print_string(va_list args);
int parse_format(const char *format, va_list args, unsigned int i, int count);
int print_binary(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_unsigned(va_list args);
int print_char(va_list args);
int print_non_printables(va_list arg);
int print_hex_upper_helper(unsigned int num);

#endif
