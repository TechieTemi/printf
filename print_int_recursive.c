#include "main.h"

/**
 * print_int_recursive - Recursive helper function to print an integer
 * @num: The integer to print
 * Return: Number of characters printed
 */

int print_int_recursive(unsigned int num)
{
	unsigned int count = 0;

	if (num / 10)
		count += print_int_recursive(num / 10);
	_putchar((num % 10) + '0');
	count++;
	return (count);
}