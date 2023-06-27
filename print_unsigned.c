#include "main.h"

/**
 * print_unsigned_helper -Helper function to print unsinged integers.
 * @num: Number to be printed.
 * Return: Number of characters printed.
 */

int print_unsigned_helper(unsigned int num)
{
	int counter = 0;

	if (num / 10)
		counter += print_unsigned_helper(num / 10);

	counter += _putchar('0' + num % 10);

	return (counter);
}

/**
 * print_unsigned - function to print unsinged integers.
 * @arg: variable argument list.
 * Return: Number of characters printed
 */

int print_unsigned(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int counter = 0;

	if (num / 10)
		counter += print_unsigned_helper(num / 10);

	counter += _putchar('0' + num % 10);

	return (counter);
}
