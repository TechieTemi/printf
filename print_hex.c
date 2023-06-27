#include "main.h"

/**
 * hex_char - Helper function to print an hexadecimal character.
 * @num: The number to be converted.
 * Return: Number of characters printed
 */

int hex_char(unsigned int num)
{
	switch (num)
	{
	case 10:
		return (_putchar('a'));
	break;
	case 11:
		return (_putchar('b'));
	break;
	case 12:
		return (_putchar('c'));
	break;
	case 13:
		return (_putchar('d'));
	break;
	case 14:
		return (_putchar('e'));
	break;
	case 15:
		return (_putchar('f'));
	break;
	default:
		return (_putchar('0' + num));
	break;
	}
}

/**
 * print_hex_helper - Helper function to print hexadecimal numbers.
 * @num: The number to be converted.
 * Return: Number of characters printed
 */

int print_hex_helper(unsigned int num)
{
	int counter = 0;

	if (num / 16)
		counter += print_hex_helper(num / 16);

	counter += _putchar(hex_char(num % 16));

	return (counter);
}

/**
 * print_hex - Helper function to print hexadecimal numbers.
 * @arg: variable argument list.
 * Return: Number of characters printed
 */

int print_hex(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int counter = 0;

	if (num / 16)
		counter += print_hex_helper(num / 16);

	counter += _putchar(hex_char(num % 16));

	return (counter);
}
