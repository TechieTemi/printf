#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: Format string
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	int counter = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			counter = parse_format(format, args, i, counter);
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}

	va_end(args);
	return (counter);
}
