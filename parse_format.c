#include "main.h"

/**
 * parse_format - handles format specifiers and prints output.
 * @format: Format string
 * @args: va_list containing the arguments
 * @i: Current string position
 * @counter: number of chars printed
 *
 * Return: Number of characters printed
 */

int parse_format(const char *format, va_list args, unsigned int i, int counter)
{
	switch (format[i])
	{
		case 'c':
			counter += _putchar(va_arg(args, int));
			break;
		case 's':
			counter += print_string(va_arg(args, char *));
			break;
		case '%':
			counter += _putchar('%');
			break;
		case 'd':
		case 'i':
			counter += print_int(va_arg(args, int));
			break;
		case 'b':
			counter += print_binary(va_arg(args, unsigned int));
			break;
		/* Add cases for other format specifiers */
		default:
			_putchar('%');
			_putchar(format[i]);
			counter += 2;
			break;
	}
	return (counter);
}
