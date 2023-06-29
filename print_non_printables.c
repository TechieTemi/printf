#include "main.h"

/**
 * print_non_printables - Prints non printable characters in hexadecimal-
 * Upper case in the range (0 < ASCII value < 32 or >= 127).
 * @arg: variable argument list.
 * Return: Number of characters printed
 */

int print_non_printables(va_list arg)
{
	unsigned int j, counter = 0;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		if (str[j] < 32 || str[j] >= 127)
		{
			counter += _putchar('\\');
			counter += _putchar('x');
			if (((int) str[j]) < 16)
			{
				_putchar('0');
				counter++;
			}
			counter += print_hex_upper_helper(((unsigned int) str[j]));
		}
		else
		{	
			_putchar(str[j]);
			counter++;
		}
	}
	return (counter);
}
