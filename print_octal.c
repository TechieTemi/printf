#include "main.h"

/**
 * print_octal_helper - Helper function to print octal numbers.
 * @num: The number to be converted.
 * Return: Number of characters printed
 */

int print_octal_helper(unsigned int num)
{
	int counter = 0;

	if (num / 8)
		counter += print_octal_helper(num / 8);

	counter += _putchar('0' + num % 8);

	return (counter);
}

/**
 * print_octal - Helper function to print octal numbers.
 * @arg: variable argument list.
 * Return: Number of characters printed
 */

int print_octal(va_list arg)
{
	unsigned int num, counter = 0;
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		counter++;
	}
	else
	{
		num = n;
	}
	counter += print_octal_helper(num);

	return (counter);
}
