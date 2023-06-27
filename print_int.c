#include "main.h"

/**
 * print_int_helper - Recursive helper function to print an integer
 * @num: The integer to print
 * Return: Number of characters printed
 */

int print_int_helper(unsigned int num)
{
	unsigned int counter = 0;

	if (num / 10)
		counter += print_int_helper(num / 10);
	_putchar((num % 10) + '0');
	counter++;
	return (counter);
}

/**
 * print_int - Helper function to print an integer
 * @arg: The integer to print
 * Return: Number of characters printed
 */

int print_int(va_list arg)
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
	counter += print_int_helper(num);
	return (counter);
}
