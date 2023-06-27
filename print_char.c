#include "main.h"

/**
 * print_char - function to print a character.
 * @arg: variable argument list.
 * Return: Number of characters printed
 */

int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
