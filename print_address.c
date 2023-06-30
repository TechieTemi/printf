#include "main.h"

/**
 * print_address_helper - Helper function to print hexadecimal numbers.
 * @num: The number to be converted.
 * Return: Number of characters printed
 */

int print_address_helper(unsigned long int num)
{
	int counter = 0;

	if (num / 16)
		counter += print_address_helper(num / 16);

	counter += _putchar(hex_char(num % 16));

	return (counter);
}

/**
 * print_address - Prints non printable characters in hexadecimal-
 * Upper case in the range (0 < ASCII value < 32 or >= 127).
 * @arg: variable argument list.
 * Return: Number of characters printed
 */

int print_address(va_list arg)
{
	unsigned int j, counter = 0;
	void *ptr = va_arg(arg, void*);
	char *str;
	unsigned long int address;

	if (ptr == NULL)
	{
		str = "(nil)";
		for (j = 0; str[j]; j++)
		{
			counter += _putchar(str[j]);
		}
	}
	else
	{
		address = (unsigned long int)ptr;
		counter += _putchar('0');
		counter += _putchar('x');
		counter += print_address_helper(address);
	}
	return (counter);
}
