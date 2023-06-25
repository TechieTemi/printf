#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char c);
int print_int(int n);
int print_int_recursive(unsigned int num);
int print_string(char *str);
int parse_format(const char *format, va_list args, unsigned int i, int count);
int print_binary(unsigned int num);

#endif
