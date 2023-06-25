#include "main.h"

/**
 * parse_format - handles format specifiers and prints output.
 * @format: Format string
 * @args: va_list containing the arguments
 * @i: Current string position
 * @count: number of chars printed
 *
 * Return: Number of characters printed
 */

int parse_format(const char *format, va_list args, unsigned int i, int count)
{
	switch (format[i])
	{
		case 'c':
			count += _putchar(va_arg(args, int));
			break;
		case 's':
			count += print_string(va_arg(args, char *));
			break;
		case '%':
			count += _putchar('%');
			break;
		case 'd':
		case 'i':
			count += print_int(va_arg(args, int));
			break;
		case 'b':
			count += print_binary(va_arg(args, unsigned int));
			break;
		/* Add cases for other format specifiers */
		default:
			_putchar('%');
			_putchar(format[i]);
			count += 2;
			break;
	}
	return (count);
}
