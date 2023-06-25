#include "main.h"

/**
 * print_int - Helper function to print an integer
 * @n: The integer to print
 * Return: Number of characters printed
 */

int print_int(int n)
{
	unsigned int num, counter = 0;

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
	counter += print_int_recursive(num);
	return (counter);
}
