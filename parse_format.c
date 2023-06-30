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
	unsigned long int j;
	_printf_spec format_specs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_char},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_upper},
		{'S', print_non_printables},
		{'p', print_address},
	};

	for (j = 0; j < sizeof(format_specs) / sizeof(format_specs[0]); j++)
	{
		if (format[i] == format_specs[j].specifier)
		{
			if (format[i] == '%')
			{
				counter += _putchar('%');
				break;
			}
			counter += format_specs[j].printer(args);
			break;
		}
	}
	if (j == sizeof(format_specs) / sizeof(format_specs[0]))
	{
		_putchar('%');
		_putchar(format[i]);
		counter += 2;
	}

	return (counter);
}
