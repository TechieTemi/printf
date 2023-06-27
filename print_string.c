#include "main.h"

/**
 * print_string - Function to print a string.
 * @arg: Variable argument list.
 * Return: Number of characters printed.
 */

int print_string(va_list arg)
{
	unsigned int j, counter = 0;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
		counter++;
	}
	return (counter);
}
