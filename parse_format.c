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
			count += print_char(va_arg(args, int));
			break;
		case 's':
			count += print_string(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			count += print_int(va_arg(args, int));
			break;
		case '%':
			write(1, "%", 1);
			break;
		case 'b':
			count += print_binary(va_arg(args, unsigned int));
			break;
		/* Add cases for other format specifiers */
		default:
			write(1, "%", 1);
			write(1, &format[i], 1);
			count += 2;
			break;
	}
	return (count);
}
