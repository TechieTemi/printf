#include "main.h"

/**
 * hex_char_upper - function to print a hexadecimal upper case character.
 * @num: The number to be converted.
 * Return: Number of characters printed
 */

int hex_char_upper(unsigned int num)
{
	switch (num)
	{
	case 10:
		return ('A');
	break;
	case 11:
		return ('B');
	break;
	case 12:
		return ('C');
	break;
	case 13:
		return ('D');
	break;
	case 14:
		return ('E');
	break;
	case 15:
		return ('F');
	break;
	default:
		return ('0' + num);
	break;
	}
}

/**
 * print_hex_upper_helper - function to print hexadecimal in upper case.
 * @num: The number to be converted.
 * Return: Number of characters printed
 */

int print_hex_upper_helper(unsigned int num)
{
	int counter = 0;

	if (num / 16)
		counter += print_hex_upper_helper(num / 16);

	counter += _putchar(hex_char_upper(num % 16));

	return (counter);
}

/**
 * print_hex_upper - function to print hexadecimal in upper case.
 * @arg: variable argument list.
 * Return: Number of characters printed
 */

int print_hex_upper(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int counter = 0;

	if (num / 16)
		counter += print_hex_upper_helper(num / 16);

	counter += _putchar(hex_char_upper(num % 16));

	return (counter);
}
